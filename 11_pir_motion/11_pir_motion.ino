// Pyroelectric infrared motion sensor can detect infrared signals from a moving person or moving animal, and output switching signals.

// The function uses byte instead of int to save memory. In this specific case, digitalRead() function returns a byte value which can either be 0 or 1, so using byte type for the state variable is sufficient. If you use an int instead, it would take up more memory than necessary, which could cause issues when working with memory-constrained devices. In general, it's good programming practice to use the smallest data type that can accommodate the range of values you need.

// The pin numbers for the Arduino are also limited to byte-sized integers (0-255), so using a byte data type for the pin numbers is sufficient and more memory-efficient than using an int.

byte sensorPin = 3;
byte indicator = 11;
void setup() {
  pinMode(sensorPin, INPUT);
  pinMode(indicator, OUTPUT);
  Serial.begin(9600);
}
void loop() {
  byte state = digitalRead(sensorPin);
  digitalWrite(indicator, state);
  if (state == 1) Serial.println("Somebody is in this area!");
  else if (state == 0) Serial.println("No one!");
  delay(500);
}