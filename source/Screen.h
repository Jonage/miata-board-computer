#ifndef Screen_h
#define Screen_h

#include <Wire.h>
#include <OBD.h>
#include <ILI9341_due_config.h>
#include <ILI9341_due.h>

class Screen {
  protected:
    const char *title;
    const char *unit;
    int index;
    int oldValue;
    COBD *obd;
    int pid;
    ILI9341_due *tft;
    Screen *previous;
    Screen *next;
    Screen *child;
    
  public:
    Screen(const char *t, const char *u, int i, ILI9341_due *s, COBD *o, int p);

    int getIndex();

    void setPreviousScreen(Screen *s);
    void setNextScreen(Screen *s);
    void setChildScreen(Screen *s);

    virtual Screen *handleBackBtn();
    virtual Screen *handleNextBtn();
    virtual Screen *handleOkBtn();
    virtual Screen *handleReset();
    
    virtual void draw();
    virtual void redraw();
    virtual void drawRevs();
    void drawMenu();
};

#endif
