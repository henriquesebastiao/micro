int pinLed[4] = {14,2,0,4};
int ledOn;

void setup() {
  Serial.begin(115200);

  int x;

  for (x = 0; x < 4; x++) {
    pinMode(pinLed[x], OUTPUT);
  }
}

void loop() {
  for (ledOn = 0; ledOn < 4; ledOn++) {
    digitalWrite(pinLed[ledOn], HIGH);
    delay(100);
  }

  delay(2000);

  for (ledOn = 0; ledOn < 4; ledOn++) {
    digitalWrite(pinLed[ledOn], LOW);
  }
  delay(1000);
}
