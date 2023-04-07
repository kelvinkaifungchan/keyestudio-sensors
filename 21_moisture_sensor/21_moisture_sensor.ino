void setup() {
  Serial.begin(9600);  //Open serial port, and set baud rate at 9600bps
}
void loop() {
  int val;
  val = analogRead(0);  //Plug vapor sensor into analog port 0
  Serial.print("Moisture is ");
  Serial.println(val, DEC);  //Read analog value through serial port printed. The second argument DEC specifies that the value should be printed in decimal format. If HEX were used instead of DEC, the value would be printed in hexadecimal format.
  delay(100);
}