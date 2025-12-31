// Pin setup
const int gasPin   = A0;  // Analog pin for gas sensor
const int firePin  = 2;   // Digital pin for fire sensor
const int buzzer   = 8;   // Buzzer pin

// Thresholds (adjust as needed)
const int gasThreshold  = 100; // Adjust based on your sensor calibration
const int fireDetected  = LOW; // Fire sensor outputs LOW when fire detected

void setup() {
  Serial.begin(9600);

  pinMode(firePin, INPUT);
  pinMode(buzzer, OUTPUT);

  digitalWrite(buzzer, LOW); // Buzzer OFF initially
}

void loop() {
  // Read gas level
  int gasValue = analogRead(gasPin);

  // Read fire sensor
  int fireValue = digitalRead(firePin);

  // Print readings to Serial Monitor
  Serial.print("Gas Value: ");
  Serial.print(gasValue);
  Serial.print(" | Fire Sensor: ");
  Serial.println(fireValue);

  // Check conditions
  if (gasValue > gasThreshold || fireValue == fireDetected) {
    digitalWrite(buzzer, HIGH); // Buzzer ON
  } else {
    digitalWrite(buzzer, LOW);  // Buzzer OFF
  }

  delay(200); // Small delay for stability
}