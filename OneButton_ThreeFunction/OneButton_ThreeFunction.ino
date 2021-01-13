
#include "OneButton.h"
#include "Btn.h" 
// true значит что кнопка подтянута к плюсу
// Setup a new OneButton on pin D2.  
OneButton btn(2, true);



void setup() {
  pinMode(LedPin1, OUTPUT);
  pinMode(LedPin2, OUTPUT);
  pinMode(LedPin3, OUTPUT);
  pinMode(LedPin4, OUTPUT);
  
  Serial.begin(9600);
  Serial.println("Starting TwoButtons...");

  btn.attachClick(click);
  btn.attachDoubleClick(doubleclick);
  btn.attachLongPressStart(longPressStart);
  btn.attachLongPressStop(longPressStop);
  btn.attachDuringLongPress(longPress);

} // setup

void loop() {
  btn.tick();

  delay(10);
} // loop
