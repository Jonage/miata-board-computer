#include <limits.h>
#include "Screen.h"

#include "assets/menu1.h"
#include "assets/shift0.h"
#include "assets/shift1.h"
#include "assets/shift2.h"
#include "assets/shift3.h"
#include "assets/shift4.h"
#include "assets/shift4e1.h"
#include "assets/shift4e2.h"
#include "assets/shift4f1.h"
#include "assets/shift4f2.h"

#include "fonts/mont16.h"
#include "fonts/mont70nums.h"

/*
 * Constructor
 */
Screen::Screen(const char *t, const char *u, int i, ILI9341_due *s, COBD *o, int p)
{
  title = t;
  unit = u;
  index = i;
  oldValue = INT_MIN;
  tft = s;
  obd = o;
  pid = p;
  previous = NULL;
  next = NULL;
  child = NULL;
}

int Screen::getIndex()
{
  return index;
}

void Screen::setPreviousScreen(Screen *s)
{
  previous = s;
}

void Screen::setNextScreen(Screen *s)
{
  next = s;
}

void Screen::setChildScreen(Screen *s)
{
  child = s;
}

/*
 * Handle button Back
 */
Screen* Screen::handleBackBtn()
{
  return previous;
}

/*
 * Handle button Next
 */
Screen* Screen::handleNextBtn()
{
  return next;
}

/*
 * Handle button OK
 */
Screen* Screen::handleOkBtn()
{
  return child ? child : this;
}

/*
 * Handle RESET
 */
Screen* Screen::handleReset()
{
  return this;
}

/*
 * Draw screen contents
 */
void Screen::draw()
{
  tft->fillScreen(ILI9341_BLACK);

  drawMenu();
  //drawRevs();

  tft->setFont(mont16);
  tft->setTextColor(ILI9341_WHITE, ILI9341_BLACK);
  tft->setTextLetterSpacing(2);

  /* Print title */
  tft->setTextArea(0, 126, 240, 14);
  tft->printAligned(title, gTextAlignMiddleCenter);

  /* Print unit */
  tft->setTextArea(0, 261, 240, 14);
  tft->printAligned(unit, gTextAlignMiddleCenter);

  /* Print triangle if has submenu */
  if (child) {
      tft->fillTriangle(115, 283, 124, 283, 119, 287, 0x4A69);
  }

  oldValue = INT_MIN;
  redraw();
}

/*
 * Redraw only dynamic content
 */
void Screen::redraw()
{
  /* Print value */
  int value;
  if (obd->version) {
    obd->readPID(pid, value);
  } else {
    value = 0;
  }

  if(value != oldValue) {
    char temp[4];
    ltoa(value,temp,10);
    tft->setFont(mont70nums);
    tft->setTextArea(0, 165, 240, 70);
    tft->setTextLetterSpacing(4);
    tft->clearTextArea(ILI9341_BLACK);
    tft->printAligned(temp, gTextAlignMiddleCenter);

    oldValue = value;
  }

  drawRevs();
}

/*
 * Draw menu
 */
void Screen::drawMenu()
{
  int x;
  int y;

  tft->drawImage(menu1, 41, 269, menu1Width, menu1Height);
  switch(index) {
    case 0:
      x = 46.5; y = 274.5;
      break;
    case 1:
      x = 68.5; y = 290.5;
      break;
    case 2:
      x = 93.5; y = 300.5;
      break;
    case 3:
      x = 120.5; y = 304.5;
      break;
    case 4:
      x = 146.5; y = 300.5;
      break;
    case 5:
      x = 171.5; y = 290.5;
      break;
    case 6:
      x = 192.5; y = 274.5;
      break;
  }

  // draw error sign
  if (index != 5) {
    tft->fillCircle(171.5, 290.5, 2.5, 0xFA60);
  }

  tft->drawCircle(x, y, 5.5, ILI9341_WHITE);
  tft->fillCircle(x, y, 2.5, ILI9341_WHITE);
}

/*
 * Draw revs indicator
 */
void Screen::drawRevs()
{
  int value;
  if (obd->version) {
    obd->readPID(PID_RPM, value);
  } else {
    value = 0;
  }

  if(value < 1000) {
    tft->drawImage(shift0, 37, 90, shift0Width, shift0Height);
    tft->drawImage(shift4e1, 37, 118, shift4e1Width, shift4e1Height);
    tft->drawImage(shift4e2, 177, 118, shift4e2Width, shift4e2Height);
  } else if (value < 2500) {
    tft->drawImage(shift1, 37, 90, shift0Width, shift0Height);
  } else if (value < 4000) {
    tft->drawImage(shift2, 37, 90, shift0Width, shift0Height);
  } else if (value < 5500) {
    tft->drawImage(shift3, 37, 90, shift0Width, shift0Height);
    tft->drawImage(shift4e1, 37, 118, shift4e1Width, shift4e1Height);
    tft->drawImage(shift4e2, 177, 118, shift4e2Width, shift4e2Height);
  } else {
    tft->drawImage(shift4, 37, 90, shift0Width, shift0Height);
    tft->drawImage(shift4f1, 37, 118, shift4f1Width, shift4f1Height);
    tft->drawImage(shift4f2, 177, 118, shift4f2Width, shift4f2Height);
  }
}
