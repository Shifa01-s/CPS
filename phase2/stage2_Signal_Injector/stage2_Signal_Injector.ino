// LinePulse Pro - Phase 2, Stage 2: 5kHz Portable Signal Injector
const int signalPin = 9;          // Drives TIP122 Base via 1k Resistor
const unsigned int freqHz = 5000; // 5kHz optimal sub-surface tracing frequency

void setup() {
  Serial.begin(115200);
  pinMode(signalPin, OUTPUT);
  
  // Start continuous 5kHz square wave on Pin D9
  tone(signalPin, freqHz);
  
  Serial.println("==========================================");
  Serial.println("LinePulse Pro: 5kHz Signal Injector ACTIVE");
  Serial.println("Transmitting 5000 Hz wave on Pin D9...");
  Serial.println("==========================================");
}

void loop() {
  // Hardware timer generates 5kHz automatically in the background!
  delay(1000);
}

