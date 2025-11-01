#define IR_PIN 27        // PIR sensor OUT pin
#define LDR_DO_PIN 34    // LDR module DO pin (digital output)
#define LED_PIN 2        // External LED pin

int lastLedState = -1;  // -1 = undefined, 0 = OFF, 1 = ON  // Tracking LED state to avoid flicker

void setup() {
  Serial.begin(9600);      
  pinMode(IR_PIN, INPUT);
  pinMode(LDR_DO_PIN, INPUT);
  pinMode(LED_PIN, OUTPUT);
  digitalWrite(LED_PIN, LOW); 
  Serial.println("System Ready — LED ON only when night AND motion detected.");  // Initialization message
}

void loop() {
  int motion = digitalRead(IR_PIN);       // Read PIR sensor state
  int ldr = digitalRead(LDR_DO_PIN);      // Read LDR sensor output

  // Convert to booleans
  bool motionDetected = (motion == HIGH);   // Motion detection condition
  bool dark = (ldr == HIGH);                // Detect darkness using LDR module

  // Change logic from OR to AND
  bool ledOn = (motionDetected && dark);    // LED ON only when BOTH motion and darkness detected

  // LED update logic
  if (ledOn && lastLedState != 1) {
    digitalWrite(LED_PIN, HIGH);
    Serial.println("LED ON (motion AND night)");  // Log LED ON state
    lastLedState = 1;
  } 
  else if (!ledOn && lastLedState != 0) {
    digitalWrite(LED_PIN, LOW);
    Serial.println("LED OFF (no motion OR day)");  // Log LED OFF state
    lastLedState = 0;
  }

  delay(50); // small delay to avoid flicker  // Smooth operation delay
}
