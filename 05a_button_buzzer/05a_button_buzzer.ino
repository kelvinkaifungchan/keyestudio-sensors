int buttonPin = 6;   // the number of the pushbutton pin
int buzzerPin = 11;  // the number of the buzzer pin

void setup() {
  pinMode(buttonPin, INPUT_PULLUP);  // set buttonPin as input with pull-up resistor

  // By enabling the internal pull-up resistor on the input pin using the INPUT_PULLUP option, the pin is connected to a high voltage level (usually 5V), which ensures that when the button is not pressed, the input is read as high (logical 1). When the button is pressed, the input is connected to ground (0V) and the pin reads low (logical 0). So, using INPUT_PULLUP ensures a more stable input reading in digital circuits with buttons, as the pin is not floating and its level is well-defined.

  pinMode(buzzerPin, OUTPUT);  // set buzzerPin as output
}

void loop() {
  unsigned char i;                      //define variable
  if (digitalRead(buttonPin) == LOW) {  // check if button is pressed
    for (i = 0; i < 10; i++)            // output sound
    {
      digitalWrite(buzzerPin, HIGH);  // sound
      delay(1);                    //delay, the longer the delay, the lower the pitch
      digitalWrite(buzzerPin, LOW);   //not sound
      delay(1);                    //ms delay
    }
  }
}