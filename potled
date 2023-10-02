int ledPin = D0;                // LED connected to digital pin D0
int analogPin = A0;             // potentiometer connected to analog pin A0
int val = 0;                    // variable to store the read value
int ledVal = 0;

void setup()
{
  // Note: analogPin pin does not require pinMode()
  pinMode(ledPin, OUTPUT);      // sets the ledPin as output
  pinMode(analogPin, INPUT);
}

void loop()
{
  val = analogRead(analogPin);    // read the analogPin
  ledVal = (val * 255) / 4095;    // analogRead values go from 0 to 4095, analogWrite values from 0 to 255
  analogWrite(ledPin, ledVal);  
  delay(10);
}
