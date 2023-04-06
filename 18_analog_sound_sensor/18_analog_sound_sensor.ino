// Analog Sound Sensor is typically used in detecting the loudness in ambient environment. The Arduino can collect its output signal by imitating the input interface. The sensor comes with a potentiometer, so that you can adjust the sensitivity. You can use it to make some interesting interactive works, such as a voice operated switch.

void setup() {
  Serial.begin(9600);  // open serial port, set the baud rate to 9600 bps
}
void loop() {
  int val;
  val = analogRead(0);       //connect mic sensor to Analog 0
  Serial.println(val, DEC);  //print the sound value to serial
  delay(100);
}