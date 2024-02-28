int red = 11;
int yellow = 10;
int green = 9;
int blue = 6;
int grey = 5;
int white = 3;
int delay_time = 100;

void setup() {
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(grey, OUTPUT);
  pinMode(white, OUTPUT);
}

void loop() {
  digitalWrite(red, HIGH);
  delay(delay_time);
  digitalWrite(red, LOW);

  digitalWrite(yellow, HIGH);
  delay(delay_time);
  digitalWrite(yellow, LOW);

  digitalWrite(green, HIGH);
  delay(delay_time);
  digitalWrite(green, LOW);

  digitalWrite(blue, HIGH);
  delay(delay_time);
  digitalWrite(blue, LOW);

  digitalWrite(grey, HIGH);
  delay(delay_time);
  digitalWrite(grey, LOW);

  digitalWrite(white, HIGH);
  delay(delay_time);
  digitalWrite(white, LOW);
}