#include "ServiceScreen.h"

#include "assets/service.h"
#include "assets/errorsm.h"

#include "fonts/mont16.h"

ServiceScreen::ServiceScreen(const char *t, const char *u, int i, ILI9341_due *s, COBD *o) : Screen(t, u, i, s, o, 0)
{
  isError = true;
}

/*
 * Draw method
 */
void ServiceScreen::draw()
{
  tft->fillScreen(ILI9341_BLACK);

  drawMenu();

  tft->setFont(mont16);
  tft->setTextColor(ILI9341_WHITE, ILI9341_BLACK);
  tft->setTextLetterSpacing(2);

  /* Print title */
  tft->setTextArea(0, 126, 240, 14);
  tft->printAligned(title, gTextAlignMiddleCenter);

  /* Draw big icon */
  tft->drawImage(service, 90, 171, serviceWidth, serviceHeight);

  /* Draw error */
  if(isError) {
    tft->setTextArea(114, 259, 36, 18);
    tft->setTextColor(255,78,0);
    tft->printAligned("error", gTextAlignMiddleLeft);
    tft->drawImage(errorsm, 88, 259, errorsmWidth, errorsmHeight);
  }

  //redraw();
}

/*
 * Redraw only dynamic content
 */
void ServiceScreen::redraw()
{
  // TODO: probably DTC error, if it is dynamic
}

void ServiceScreen::drawRevs()
{
}
