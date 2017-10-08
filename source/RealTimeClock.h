#ifndef RealTimeClock_h
#define RealTimeClock_h

#define DS3231_I2C_ADDRESS 0x68

#include <Arduino.h>

class RealTimeClock {
  private:
    byte decToBcd(byte val);
    byte bcdToDec(byte val);
    
  public:
    RealTimeClock();
    void setTime(byte second, byte minute, byte hour, byte dayOfWeek, byte dayOfMonth, byte month, byte year);
    void readTime(byte *second, byte *minute, byte *hour, byte *dayOfWeek, byte *dayOfMonth, byte *month, byte *year);
    void displayTime();
};

#endif
