void setup() {
   pinMode(13, OUTPUT);
   pinMode(12, INPUT);
}

void loop() {
   digitalWrite(13, HIGH);
   digitalWrite(12, HIGH);

   delay(1000);

   digitalWrite(13, LOW);
   digitalWrite(12, LOW);

   delay(1000);
}