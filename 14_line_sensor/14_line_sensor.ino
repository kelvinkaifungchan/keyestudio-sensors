// This Line Tracking Sensor can detect white line in black and black line in white. The single line-tracking signal provides a stable output signal TTL for a more accurate and more stable line.

void setup() {
  Serial.begin(9600);
}
void loop() {
  Serial.println(digitalRead(3));  // print the data from the sensor
  delay(500);
}