Servo myservo;  // create servo object to control a servo
                // a maximum of eight servo objects can be created
int pot = A0;
int led = D0;

int pos = 0;    // variable to store the servo position
int ledBrightness = 0;
int potVal = 0;


void setup()
{
    pinMode(led, OUTPUT);
    pinMode(pot, INPUT);
    myservo.attach(D3);  // attaches the servo on the D0 pin to the servo object
}


void loop()
{
    potVal = analogRead(pot);
    pos = (180 * potVal) / 4095;
    //ledBrightness = (255 * potVal) / 4095;
    //analogWrite(led, ledBrightness);
    myservo.write(pos);
    delay(15);                       // waits 15ms for the servo to reach the position
}
