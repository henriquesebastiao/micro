void setup() {
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop() {
  int intervalo_pisca;
  int intervalo_pisca2;

  intervalo_pisca = 200;
  intervalo_pisca2 = 500;

  digitalWrite(10, HIGH);
  digitalWrite(9, LOW);
  delay(intervalo_pisca);

  digitalWrite(10, LOW);
  digitalWrite(9, HIGH);
  delay(intervalo_pisca2);
}
