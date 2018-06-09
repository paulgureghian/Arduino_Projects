int led = 13;

void setup() {
  
  pinMode(led, OUTPUT);
}

void loop() {
  
  blink_fast();
  blink_slow();
}

void blink_fast() {
  for (int j = 0; j < 5; j++) {
      digitalWrite (led, HIGH);
      delay(500);
      digitalWrite (led, LOW);
      delay(500);
  }
}
 
void blink_slow() {
    for (int i = 0; i < 5; i++) {
      digitalWrite (led, HIGH);
      delay(1000);
      digitalWrite (led, LOW);
      delay(2000);
  }
}
