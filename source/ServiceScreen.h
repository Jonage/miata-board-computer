#ifndef ServiceScreen_h
#define ServiceScreen_h

#include "Screen.h"

class ServiceScreen : public Screen {
  private:
    bool isError;

  public:
    ServiceScreen(const char *t, const char *u, int i, ILI9341_due *s, COBD *o);
    virtual void draw();
    virtual void redraw();
    virtual void drawRevs();
};

#endif
