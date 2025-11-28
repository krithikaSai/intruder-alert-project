#define IR_PIN 15
#define BUZZER_PIN 4
#define LED_PIN 18

void setup() {
  Serial.begin(115200);

  pinMode(IR_PIN, INPUT);
  pinMode(BUZZER_PIN, OUTPUT);
  pinMode(LED_PIN, OUTPUT);

  // Start system in safe state
  digitalWrite(BUZZER_PIN, HIGH);   // buzzer off (low-level trigger)
  digitalWrite(LED_PIN, LOW);       // LED off
}

void loop() {
  int irValue = digitalRead(IR_PIN);

  Serial.println(irValue);

  if (irValue == 0) {
    // Object detected
    digitalWrite(BUZZER_PIN, LOW);   // buzzer ON
    digitalWrite(LED_PIN, HIGH);     // LED ON
  } else {
    digitalWrite(BUZZER_PIN, HIGH);  // buzzer OFF
    digitalWrite(LED_PIN, LOW);      // LED OFF
  }

  delay(100);
}
