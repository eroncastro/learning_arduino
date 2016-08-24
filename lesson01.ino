int ledPin = 13;
int waitTimeOn = 100;
int waitTimeOff = 100;

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  digitalWrite(ledPin, HIGH);
  delay(waitTimeOn);
  digitalWrite(ledPin, LOW);
  delay(waitTimeOff);
}
