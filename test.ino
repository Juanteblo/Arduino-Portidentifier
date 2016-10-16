// highest portnumber you want to test
int led = 5;

void setup() {
  for (int i = 0; i <= led; i++)
  {
    pinMode(i, OUTPUT);
  }
}

void loop() {
  for (int j = 0; j <= led; j++) {
    for (int i = j; i <= led; i++)
    {
      digitalWrite(i, HIGH);
    }
    delay(50);
    for (int i = j; i <= led; i++)
    {
      digitalWrite(i, LOW);
    }
    delay(150);
  }
  delay(500);
}
