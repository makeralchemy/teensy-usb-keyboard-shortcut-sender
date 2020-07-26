#include <Bounce.h>

int leftButtonPin = 0;
int middleButtonPin = 1;
int rightButtonPin = 2;

int debounceTime = 10; // 10 ms debounce

Bounce leftButton   = Bounce(leftButtonPin, debounceTime);
Bounce middleButton = Bounce(middleButtonPin, debounceTime);
Bounce rightButton  = Bounce(rightButtonPin, debounceTime);

void setup() {
  Serial.begin(38400);
  pinMode(leftButtonPin, INPUT_PULLUP);
  pinMode(middleButtonPin, INPUT_PULLUP);
  pinMode(rightButtonPin, INPUT_PULLUP);
}

void loop() {
  // check to see if the left button was pressed
  if (leftButton.update()) {
    if (leftButton.fallingEdge()) {
      Serial.println("Left button pressed...");
    }
  }

  // check to see if the middle button was pressed
  if (middleButton.update()) {
    if (middleButton.fallingEdge()) {
      Serial.println("Middle button pressed...");
    }
  }

  // check to see if the left button was pressed
  if (rightButton.update()) {
    if (rightButton.fallingEdge()) {
      Serial.println("Right button pressed...");
    }
  }   
}
