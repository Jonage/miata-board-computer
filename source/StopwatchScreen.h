#ifndef StopwatchScreen_h
#define StopwatchScreen_h

#include "Screen.h"

class StopwatchScreen : public Screen {
  protected:
    bool running;
    long startTime;
    long elapsedTime;
    int elapsedMilis;
    int elapsedSeconds;
    int elapsedMinutes;

  public:
    StopwatchScreen(const char *t, const char *u, int i, ILI9341_due *s, COBD *o);
    virtual void draw();
    virtual void redraw();
    virtual void drawRevs();
    virtual StopwatchScreen *handleReset();
};

#endif
