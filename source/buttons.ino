/* Number of buttons */
const int numberButtons = 3;

/* Set the pins used for buttons
 * 5 = Back button
 * 6 = OK button
 * 7 = Next button
 */
int button[numberButtons] = {5, 6, 7};

/* Start state of the buttons is off (HIGH = off when INPUT_PULLUP used)
 * No need for pullup/down resistors 
 */
int lastButtonState[numberButtons];

/* Bools used for when buttons currently pressed (used for long press detection) */
bool buttonActive[numberButtons];

/* Debounce timer for each button */
unsigned long lastDebounceTime[numberButtons];

/* Set the debounce delay */
int debounceDelay = 25;

/* Set the time required for a long press */
int longPressDelay = 500;


/*
 * Read buttons
 */
void readButtons() {
  for (int x = 0; x < numberButtons; x++)
  {
    int state = debounceButton(x);

    /* Short press */
    if (state == 1) {
      handleButtonPress(x, false);
    }

    /* Long press */
    if (state == 2) {
      handleButtonPress(x, true);
    }
  }
}

/*
 * Handle button press
 */

Screen *scr;
void handleButtonPress(int number, bool longPress) {
  switch(number) {
    /* Back button */
    case 0:
      currentScreen = currentScreen->handleBackBtn();
      break;

    /* OK button */
    case 1:
      if(!longPress) {
        currentScreen = currentScreen->handleOkBtn();
      } else {
        currentScreen = currentScreen->handleReset();
      }
      break;

    /* Next button */
    case 2:
      currentScreen = currentScreen->handleNextBtn();
  }
  currentScreen->draw();
}

/*
 * Debounce button press
 * 
 * returns:
 * 0 = button not pressed
 * 1 = short press
 * 2 = long press
 */
int debounceButton(int number)
{
  //Handle presses for each button
  int reading = digitalRead(button[number]);

  //Check if button state has changed since last check
  if (reading != lastButtonState[number])
  {
    if (reading==HIGH && !buttonActive[number])
    {
      lastButtonState[number] = reading;
      
      //Return 0 (not pressed)
      return 0;
    }
    
    //if reading is high (open)
    if (reading==HIGH && buttonActive[number])
    {
      if (millis() - lastDebounceTime[number] > debounceDelay)
      {
        lastButtonState[number] = reading;

        buttonActive[number]=true;

        //Return 1 (short press)
        return 1;
      }

      lastButtonState[number] = reading;

      buttonActive[number]=false;
      
      //Return 0 (not pressed)
      return 0;
    }
    
    //if reading is low (closed)
    else if (reading==LOW)
    {
      if (!buttonActive[number])
      {
        //Start debounce timer
        lastDebounceTime[number]=millis();
        
        lastButtonState[number] = reading;

        buttonActive[number]=true;

        //Return 0 (not pressed)
        return 0;
      }
      //Return 0 (not pressed)
      return 0;
    }
  }

  //Check if reading still high (open)
  if (reading==HIGH)
  {
    lastButtonState[number] = reading;
    buttonActive[number]=false;

    //Return 0 (not pressed)
    return 0;
  }

  
  if (reading==LOW)
  {
    //Check if button pressed for long enough to register as long press
    if (millis() - lastDebounceTime[number] > longPressDelay && buttonActive[number])
    {
      lastButtonState[number] = reading;

      buttonActive[number]=false;

      //Return 2 (long press)
      return 2;
    }
    else
      //Return 0 (not pressed)
      return 0;
  }
}

/* 
 * Init buttons
 */
void initButtons() {
  for (int x=0; x < numberButtons; x++) {
    lastButtonState[x] = HIGH;
    buttonActive[x] = false;
    lastDebounceTime[x] = 0;
    pinMode(button[x], INPUT_PULLUP);
  } 
}



