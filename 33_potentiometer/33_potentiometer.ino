// A potentiometer is a three-terminal variable resistor that can be used to adjust the level of an electrical signal. It consists of a resistive element with a sliding contact that can be moved to vary the resistance, which in turn changes the voltage or current level in a circuit.

void setup() {
  Serial.begin(9600);  //Set serial baud rate to 9600 bps
}
void loop() {
  int val;
  val = analogRead(0);       //Read rotation sensor value from analog 0
  Serial.println(val, DEC);  //Print the value to serial port
  delay(100);
}