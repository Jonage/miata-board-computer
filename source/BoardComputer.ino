/***************************************************
 *
 * Board Computer for Mazda MX-5
 *
 * version: 0.2
 * date:    7.10.2017
 * author:  Jonas Kycek (jonas@kycek.cz)
 * TFT:     ILI9341 (http://marekburiak.github.io/ILI9341_due/)
 * OBDII:   Freematics (http://freematics.com/pages/products/arduino-obd-adapter/)
 *
 ****************************************************/


#include <SPI.h>
#include <Wire.h>
#include <Adafruit_Sensor.h>
#include <Adafruit_BMP280.h>
#include <OBD.h>
#include <ILI9341_due_config.h>
#include <ILI9341_due.h>
#include "Screen.h"
#include "ClockScreen.h"
#include "ServiceScreen.h"
#include "RaceScreen.h"
#include "Wire.h"

/* TFT pins */
#define TFT_RST 8
#define TFT_DC 9
#define TFT_CS 10
#define TFT_BACKLIGHT 11

/* BMP280 temperature sensor */
#define BMP_SCK 41
#define BMP_MISO 42
#define BMP_MOSI 40
#define BMP_CS 43

Adafruit_BMP280 bme(BMP_CS, BMP_MOSI, BMP_MISO,  BMP_SCK);

/* OBDII interface */
COBD obd;

/* Use hardware SPI (on Uno, #13, #12, #11) and the above for CS/DC */
ILI9341_due tft = ILI9341_due(TFT_CS, TFT_DC, TFT_RST);

/*
 * Define screens
 */
ClockScreen clockScreen("", "`C", 0, &tft, &obd, &bme);
Screen speedScreen("speed", "km/h", 1, &tft, &obd, PID_SPEED);

Screen fuelAverageScreen("average fuel", "l/100", 2, &tft, &obd, PID_ENGINE_LOAD);
Screen fuelActualScreen("actual fuel", "l/100", 2, &tft, &obd, PID_ABSOLUTE_ENGINE_LOAD);

Screen rangeScreen("range", "km", 3, &tft, &obd, PID_THROTTLE);

Screen oilPressureScreen("oil pressure", "BAR", 4, &tft, &obd, PID_MAF_FLOW);
Screen oilTempScreen("oil temp", "`C", 4, &tft, &obd, PID_ENGINE_OIL_TEMP);
Screen coolantScreen("coolant", "`C", 4, &tft, &obd, PID_COOLANT_TEMP);

ServiceScreen serviceScreen("service", "", 5, &tft, &obd);
Screen batteryScreen("battery", "V", 5, &tft, &obd, PID_CONTROL_MODULE_VOLTAGE);
Screen errorScreen("error log", "", 5, &tft, &obd, 0);

RaceScreen raceScreen("race", "", 6, &tft, &obd);
Screen stopwatchScreen("lap time", "", 6, &tft, &obd, 0);
Screen accelScreen("0-100 kmh", "", 6, &tft, &obd, PID_SPEED);

Screen *currentScreen = &clockScreen;

// TODO: remove in production
unsigned int testRevs;
bool count = true;






/*
 * Setup function
 */
void setup() {
  /* init the menu structure */

  clockScreen.setPreviousScreen(&raceScreen);
  clockScreen.setNextScreen(&speedScreen);

  speedScreen.setPreviousScreen(&clockScreen);
  speedScreen.setNextScreen(&fuelAverageScreen);

  fuelAverageScreen.setPreviousScreen(&speedScreen);
  fuelAverageScreen.setNextScreen(&rangeScreen);
  fuelAverageScreen.setChildScreen(&fuelActualScreen);

    fuelActualScreen.setPreviousScreen(&speedScreen);
    fuelActualScreen.setNextScreen(&rangeScreen);
    fuelActualScreen.setChildScreen(&fuelAverageScreen);

  rangeScreen.setPreviousScreen(&fuelAverageScreen);
  rangeScreen.setNextScreen(&oilPressureScreen);

  oilPressureScreen.setPreviousScreen(&rangeScreen);
  oilPressureScreen.setNextScreen(&serviceScreen);
  oilPressureScreen.setChildScreen(&oilTempScreen);

    oilTempScreen.setPreviousScreen(&rangeScreen);
    oilTempScreen.setNextScreen(&serviceScreen);
    oilTempScreen.setChildScreen(&coolantScreen);

    coolantScreen.setPreviousScreen(&rangeScreen);
    coolantScreen.setNextScreen(&serviceScreen);
    coolantScreen.setChildScreen(&oilPressureScreen);

  serviceScreen.setPreviousScreen(&oilPressureScreen);
  serviceScreen.setNextScreen(&raceScreen);
  serviceScreen.setChildScreen(&batteryScreen);

    batteryScreen.setPreviousScreen(&oilPressureScreen);
    batteryScreen.setNextScreen(&raceScreen);
    batteryScreen.setChildScreen(&errorScreen);

    errorScreen.setPreviousScreen(&oilPressureScreen);
    errorScreen.setNextScreen(&raceScreen);
    errorScreen.setChildScreen(&serviceScreen);

  raceScreen.setPreviousScreen(&serviceScreen);
  raceScreen.setNextScreen(&clockScreen);
  raceScreen.setChildScreen(&stopwatchScreen);

    stopwatchScreen.setPreviousScreen(&serviceScreen);
    stopwatchScreen.setNextScreen(&clockScreen);
    stopwatchScreen.setChildScreen(&accelScreen);

    accelScreen.setPreviousScreen(&serviceScreen);
    accelScreen.setNextScreen(&clockScreen);
    accelScreen.setChildScreen(&raceScreen);





  /* init Wire */
  Wire.begin();

  /* init serial */
  Serial.begin(9600);
  while (!Serial) ; // wait for Arduino Serial Monitor
  Serial.println(F("Miata Board Computer - Start"));

  /* init temperature sensor  */
  bme.begin();

  /* init buttons */
  initButtons();

  /* init tft */
  ititTft();

  /* Show splash screen */
  delay(1000);
  splashScreen(2000);

  /* Init OBD */
  // obd.begin();
  Serial.print("Adapter version: ");
  // Serial.println(obd.version);
  // while (!obd.init());

  /* Print first screen */
  currentScreen->draw();
}


/*
 * Main loop
 */
void loop(void) {
  readButtons();

  // TODO: remove in production
  if((millis() % 400) == 0) {
    currentScreen->redraw();
  }

  if((millis() % 80) == 0) {
    currentScreen->drawRevs();

    if(testRevs < 5 && count) {
      ++testRevs;

      if(testRevs == 4)
        count = false;
    } else if (testRevs >= 0 && !count) {
      --testRevs;

      if(testRevs == 1)
        count = true;
    }
  }
}
