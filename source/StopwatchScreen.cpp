#include "StopwatchScreen.h"

#include "assets/race.h"

#include "fonts/mont16.h"
#include "fonts/mont60nums.h"

StopwatchScreen::StopwatchScreen(const char *t, const char *u, int i, ILI9341_due *s, COBD *o) : Screen(t, u, i, s, o, 0)
{
  running = false;
  startTime = 0;
}

/*
 * Handle RESET
 * Start or stop the clock
 */
StopwatchScreen* StopwatchScreen::handleReset()
{
  if (!running) {
    startTime = millis();
    running = true;
  } else {
    running = false;
  }
}

/*
 * Draw method
 */
void StopwatchScreen::draw()
{
  tft->fillScreen(ILI9341_BLACK);
  tft->fillArc(120, 120, 120, 4, 0, 360, 0xE8E4);

  drawMenu();

  tft->setFont(mont16);
  tft->setTextColor(ILI9341_WHITE, ILI9341_BLACK);
  tft->setTextLetterSpacing(2);

  /* Print title */
  tft->setTextArea(0, 46, 240, 14);
  tft->printAligned(title, gTextAlignMiddleCenter);

  /* Draw big icon */
  tft->drawImage(race, 63, 89, raceWidth, raceHeight);
}

/*
 * Redraw only dynamic content
 */
void StopwatchScreen::redraw()
{
  /* Count elapsed Time */
  elapsedTime =   millis() - startTime;
  elapsedMinutes = (elapsedTime / 60000L);
  elapsedSeconds = (elapsedTime / 1000L);              // divide by 1000 to convert to seconds - then cast to an int to print
  elapsedMilis = (elapsedTime / 100);            // divide by 100 to convert to 1/100 of a second - then cast to an int to print
  /*
  fractional = (int)(elapsedFrames % frameRate);       // use modulo operator to get fractional part of 100 Seconds
  fractionalSecs = (int)(elapsedSeconds % 60L);        // use modulo operator to get fractional part of 60 Seconds
  fractionalMins = (int)(elapsedMinutes % 60L);
  char temp[8];
  ltoa(value,temp,10);
  tft->setFont(mont60nums);
  tft->setTextArea(0, 85, 240, 70);
  tft->setTextLetterSpacing(4);
  tft->clearTextArea(ILI9341_BLACK);
  tft->printAligned(temp, gTextAlignMiddleCenter);*/
}

void StopwatchScreen::drawRevs()
{
}
