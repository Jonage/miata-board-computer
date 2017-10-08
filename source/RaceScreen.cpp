#include "RaceScreen.h"

#include "assets/race.h"

#include "fonts/mont16.h"

RaceScreen::RaceScreen(const char *t, const char *u, int i, ILI9341_due *s, COBD *o) : Screen(t, u, i, s, o, 0)
{
}

/*
 * Draw method
 */
void RaceScreen::draw()
{
  tft->fillScreen(ILI9341_BLACK);

  drawMenu();
  tft->fillArc(120, 200, 120, 4, 0, 360, 0xE8E4);

  tft->setFont(mont16);
  tft->setTextColor(ILI9341_WHITE, ILI9341_BLACK);
  tft->setTextLetterSpacing(2);

  /* Print title */
  tft->setTextArea(0, 126, 240, 14);
  tft->printAligned(title, gTextAlignMiddleCenter);

  /* Draw big icon */
  tft->drawImage(race, 63, 169, raceWidth, raceHeight);
}

/*
 * Redraw only dynamic content
 */
void RaceScreen::redraw()
{
}

void RaceScreen::drawRevs()
{
}
