
int vibrationPin = 2;
int buzzerPin = 8;
int ledPin = 9;

void setup() {
  pinMode(vibrationPin, INPUT);
  pinMode(buzzerPin, OUTPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int vibration = digitalRead(vibrationPin);

  if (vibration == HIGH) {
    digitalWrite(buzzerPin, HIGH);
    digitalWrite(ledPin, HIGH);
    Serial.println("Accident Detected!");
    delay(3000);
  } else {
    digitalWrite(buzzerPin, LOW);
    digitalWrite(ledPin, LOW);
  }
}
