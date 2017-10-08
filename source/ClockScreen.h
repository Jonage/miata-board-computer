#ifndef ClockScreen_h
#define ClockScreen_h

#include "Screen.h"
#include "RealTimeClock.h"
#include <Adafruit_BMP280.h>

class ClockScreen : public Screen {
  private:
    char storedTime[6];
    int storedTemp;
    RealTimeClock *rtc;
    Adafruit_BMP280 *bme;
    bool mode;    // 0 - normal / 1 - setup
    bool format;  // 0 - 12h / 1 - 24h
    byte setMinute, setHour;

  public:
    ClockScreen(const char *t, const char *u, int i, ILI9341_due *s, COBD *o, Adafruit_BMP280 *b);

    virtual Screen *handleBackBtn();
    virtual Screen *handleNextBtn();
    virtual ClockScreen *handleOkBtn();
    virtual ClockScreen *handleReset();
    
    virtual void draw();
    virtual void redraw();
    virtual void drawRevs();
    void drawTemp();
};

#endif
