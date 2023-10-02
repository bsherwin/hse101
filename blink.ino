// set the onboard LED pin
int onboard = D7;

void setup() {
    pinMode(onboard, OUTPUT);
}

void loop() {
    digitalWrite(onboard, HIGH);
    delay(1000);
    digitalWrite(onboard, LOW);
    delay(1000);
}
