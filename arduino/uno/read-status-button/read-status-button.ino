void setup() {
  pinMode(7, INPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
}

void loop() {
  int status_button;
  status_button = digitalRead(7);

  digitalWrite(11, status_button);
  digitalWrite(10, !status_button);
}