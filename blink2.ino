// set the onboard LED pin
int onboard = D7;
int redLED = D0;

void setup() {
  pinMode(onboard, OUTPUT);
  pinMode(redLED, OUTPUT);
}

void loop() {
  digitalWrite(onboard, HIGH);
  delay(1000);
  digitalWrite(onboard, LOW);
  digitalWrite(redLED, HIGH);
  delay(1000);
  digitalWrite(redLED, LOW);
}
