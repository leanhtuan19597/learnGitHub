#define LedPin1 5
#define LedPin2 6

void doubleclick() {
  Serial.println("Button 1 doubleclick.");
  static bool ledPin1_status = HIGH;
  digitalWrite(LedPin1, ledPin1_status);
  delay(3000);
  digitalWrite(LedPin1, LOW);
} 

void longPressStart() {
  Serial.println("Button longPress start");
  digitalWrite(LedPin2,HIGH);

} 

void longPress() {
  Serial.println("Button longPress...");
  digitalWrite(LedPin2,HIGH);

} 

void longPressStop() {
  Serial.println("Button longPress stop");
  digitalWrite(LedPin2,LOW);

} 
