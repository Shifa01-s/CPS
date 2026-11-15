// LinePulse Pro - Phase 2, Stage 1: Home Base Station Alarm
const int sensorPin = 26;  // Connected to PC817 V1 (or test wire)
const int buzzerPin = 27;  // Connected to Active Buzzer (+)

void setup() {
  Serial.begin(115200);
  pinMode(sensorPin, INPUT_PULLUP);
  pinMode(buzzerPin, OUTPUT);
  digitalWrite(buzzerPin, LOW); // Silent at start
  
  Serial.println("==========================================");
  Serial.println("LinePulse Pro: Home Base Station Armed!");
  Serial.println("==========================================");
}

void loop() {
  int lineStatus = digitalRead(sensorPin);

  if (lineStatus == HIGH) {
    Serial.println("ALERT: Cable Cut Detected!");
    digitalWrite(buzzerPin, HIGH); // Scream the Active Buzzer!
  } else {
    Serial.println("Status: Line Intact (Normal)");
    digitalWrite(buzzerPin, LOW);  // Silence the alarm
  }
  
  delay(500);
}

