#include <Adafruit_BMP280.h>
#include <limits.h>
#include "ClockScreen.h"
#include "RealTimeClock.h"

#include "assets/logo.h"
#include "assets/cold.h"

#include "fonts/mont16.h"
#include "fonts/mont60nums.h"


ClockScreen::ClockScreen(const char *t, const char *u, int i, ILI9341_due *s, COBD *o, Adafruit_BMP280 *b) : Screen(t, u, i, s, o, 0)
{
  rtc = new RealTimeClock();
  bme = b;
  mode = 0; // 0 - normal, 1 - setup time
  format = 1;
  setMinute = setHour = 99;
}

/*
 * Draw method
 */
void ClockScreen::draw()
{
  tft->fillScreen(ILI9341_BLACK);

  drawMenu();

  tft->setFont(mont16);
  tft->setTextColor(ILI9341_WHITE, ILI9341_BLACK);
  tft->setTextLetterSpacing(2);

  if(mode == 0) {
    // normal mode ---------------------

    /* Draw miata logo */
    tft->drawImage(logo, 80, 121, logoWidth, logoHeight);
  
    storedTemp = INT_MIN;
    drawTemp();
  } else {
    // setup mode ---------------------

    /* retrieve data from DS3231 */
    if(setMinute == 99) {
      byte second, minute, hour, dayOfWeek, dayOfMonth, month, year;
      rtc->readTime(&second, &minute, &hour, &dayOfWeek, &dayOfMonth, &month, &year);
      setMinute = minute;
      setHour = hour;
    }

    /* Print title */
    tft->setTextArea(0, 126, 240, 14);
    tft->printAligned("set time", gTextAlignMiddleCenter);
  
    /* Print format */
    String printFormat;
    if(format == 0) {
      printFormat = "12h";
    } else {
      printFormat = "24h";
    }
    tft->setTextArea(0, 261, 240, 14);
    tft->printAligned(printFormat, gTextAlignMiddleCenter);
  }

  // reset time to redraw it
  memset(storedTime, 0, sizeof storedTime);
  redraw();
}

/*
 * Redraw only dynamic content
 */
void ClockScreen::redraw()
{
  byte second, minute, hour, dayOfWeek, dayOfMonth, month, year;
  char currentTime[6];

  if(mode == 0) {
    // normal mode ---------------------

    drawTemp();

    // retrieve data from DS3231
    rtc->readTime(&second, &minute, &hour, &dayOfWeek, &dayOfMonth, &month, &year);
  } else {
    // setup mode ---------------------

    minute = setMinute;
    hour = setHour;
  }

  // conversion for 12h format
  if(format == 0) {
    if(hour > 12){
      hour -= 12;
    } else if(hour == 0) {
      hour = 12;
    }
  }
  
  if(minute < 10) {
    sprintf(currentTime, "%d:0%d", hour, minute);
  } else {
    sprintf(currentTime, "%d:%d", hour, minute);
  }

  // when time didn't changed we don't redraw the screen
  if(strcmp(currentTime, storedTime) == 0) {
    return;
  } else {
    memcpy(storedTime, currentTime, strlen(currentTime)+1);
  }

  tft->setFont(mont60nums);
  tft->setTextArea(0, 165, 240, 70);
  tft->setTextLetterSpacing(4);
  tft->clearTextArea(ILI9341_BLACK);
  tft->printAligned(currentTime, gTextAlignMiddleCenter);
}

/*
 * Draw temperature
 * Draw the snow flake icon when the temperature is under 4 °C
 */
void ClockScreen::drawTemp()
{
  int temp;
  float readTemp = bme->readTemperature() + 0.5;
  temp = (int) readTemp;

  // redraw only if temperature changed
  if(temp != storedTemp) {
    storedTemp = temp;
    char temperature[5];
    sprintf(temperature, "%d%s", temp, unit);
    tft->setFont(mont16);
    tft->setTextArea(74, 259, 92, 18);
    tft->clearTextArea(ILI9341_BLACK);

    if(temp > 5) {
      tft->printAligned(temperature, gTextAlignMiddleCenter);
    } else {
      tft->setTextArea(116, 259, 50, 18);
      tft->printAligned(temperature, gTextAlignMiddleLeft);
      tft->drawImage(cold, 92, 259, coldWidth, coldHeight);
    }
  }
}

/*
 * Draw revs
 * We wont draw revs on clock screen
 */
void ClockScreen::drawRevs()
{
}

/*
 * Handle RESET
 * Enter setup mode
 */
ClockScreen* ClockScreen::handleReset()
{
  if(mode == 0) {
    // enter setup mode
    mode = 1;
  } else {
    // save time to DS3231
    byte second, minute, hour, dayOfWeek, dayOfMonth, month, year;
    rtc->readTime(&second, &minute, &hour, &dayOfWeek, &dayOfMonth, &month, &year);
    rtc->setTime(0, setMinute, setHour, dayOfWeek, dayOfMonth, month, year);
    mode = 0;
    setMinute = setHour = 99;
  }
  return this;
}

/*
 * Handle button OK
 * Switch time format in setup mode
 */
ClockScreen* ClockScreen::handleOkBtn()
{
  if(mode == 1) {
    if(format == 0) {
      format = 1;
    } else {
      format = 0;
    }
  }
  return this;
}

/*
 * Handle button Back
 * Increment hour in setup mode
 */
Screen* ClockScreen::handleBackBtn()
{
  if(mode == 1) {
    if(setHour < 23) {
      setHour += 1;
    } else {
      setHour = 0;
    }
    
    return this;
  } else {
    return previous;
  }
}

/*
 * Handle button Next
 * Increment minute in setup mode
 */
Screen* ClockScreen::handleNextBtn()
{
  if(mode == 1) {
    if(setMinute < 59) {
      setMinute += 1;
    } else {
      setMinute = 0;
    }
    
    return this;
  } else {
    return next;
  }
}
