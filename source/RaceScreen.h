#ifndef RaceScreen_h
#define RaceScreen_h

#include "Screen.h"

class RaceScreen : public Screen {
  private:

  public:
    RaceScreen(const char *t, const char *u, int i, ILI9341_due *s, COBD *o);
    virtual void draw();
    virtual void redraw();
    virtual void drawRevs();
};

#endif
