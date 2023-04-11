int pinsCount = 8; // declaring the integer variable pinsCount
int pins[] = {0, 1, 2, 3, 4, 5, 6, 7}; // declaring the array pins

void setup()
{
  DDRD = 0xff;
  DDRB = 0x00;
  Serial.begin(57600);
  for (int i = 0; i < pinsCount; i = i + 1) // counting the variable i from 0 to 9
  {
    pinMode(pins[i], OUTPUT); // initialising the pin at index i of the array of pins as OUTPUT
  }
}

void loop()
{
  for (int i = 0; i < pinsCount; i = i + 1) // chasing right
  {
    digitalWrite(pins[i], HIGH); // switching the LED at index i on
    delay(100); // stopping the program for 100 milliseconds
    digitalWrite(pins[i], LOW); // switching the LED at index i off
  }
  for (int i = pinsCount - 1; i > 0; i = i - 1) // chasing left (except the outer leds)
  {
    digitalWrite(pins[i], HIGH); // switching the LED at index i on
    delay(100); // stopping the program for 100 milliseconds
    digitalWrite(pins[i], LOW); // switching the LED at index i off
  }
}