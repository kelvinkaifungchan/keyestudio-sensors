/* # When you push the digital button, the LED will turn on. Otherwise, the led turns off.
*/
int ledPin = 11;                // choose the pin for the LED
int inputPin = 3;               // Connect sensor to input pin 3 
void setup() {
  pinMode(ledPin, OUTPUT);      // declare LED as output
  pinMode(inputPin, INPUT);     // declare pushbutton as input
}
void loop(){
  int val = digitalRead(inputPin);  // read input value
  if (val == HIGH) {            // check if the input is HIGH
    digitalWrite(ledPin, HIGH);  // turn LED OFF
  } else {
    digitalWrite(ledPin, LOW); // turn LED ON
  }
}