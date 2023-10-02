int onboard = D7;
int switcher = D0;
int closed = 1;

void setup() {
    pinMode(onboard, OUTPUT);
    pinMode(switcher, INPUT_PULLUP);
}

void loop() {
    closed = digitalRead(switcher);
    if (closed) {
        // true code goes here
        digitalWrite(onboard, LOW);
    }
    else {
        // false code goes here
        digitalWrite(onboard, HIGH);
    }
}
