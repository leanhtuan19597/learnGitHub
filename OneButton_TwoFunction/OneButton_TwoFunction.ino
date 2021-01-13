
#include "OneButton.h"
#include "Btn.h" 
 
OneButton btn(2, true);

void setup() {
  pinMode(LedPin1, OUTPUT);
  pinMode(LedPin2, OUTPUT);
  
  Serial.begin(9600);
  Serial.println("Starting TwoButtons...");

  btn.attachDoubleClick(doubleclick);
  btn.attachLongPressStart(longPressStart);
  btn.attachLongPressStop(longPressStop);
  btn.attachDuringLongPress(longPress);

} // setup

void loop() {
  btn.tick();
  delay(10);
} // loop
