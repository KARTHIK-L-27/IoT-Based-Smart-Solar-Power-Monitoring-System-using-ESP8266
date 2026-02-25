int sensorPin = A0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int value = analogRead(sensorPin);

  float voltage = value * (3.3 / 1023.0) * 5; 
  float current = (voltage - 2.5) / 0.066; 

  float power = voltage * current;

  Serial.print("Voltage: ");
  Serial.print(voltage);
  Serial.print(" V  Current: ");
  Serial.print(current);
  Serial.print(" A  Power: ");
  Serial.print(power);
  Serial.println(" W");

  delay(2000);
}