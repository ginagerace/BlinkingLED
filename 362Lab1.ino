int red = 12;
int green = 11;

// the setup function runs once when you press reset or power the board
void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
  digitalWrite(red, HIGH);           // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(red, LOW);            // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
  digitalWrite(green, HIGH);         // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(green, LOW);          // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
}
