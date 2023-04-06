int buzzer = 11;  //set digital IO pin of the buzzer
void setup() {
  pinMode(buzzer, OUTPUT);  // set digital IO pin pattern, OUTPUT to be output
}

void loop() {
  unsigned char i;  //define variable
  //infinite loop
  while (1) {
    for (i = 0; i < 80; i++)  // output number of times buzzer is buzzed
    {
      digitalWrite(buzzer, HIGH);  // sound
      // digitalWrite() is an Arduino function that is used to write a digital signal to a pin. It takes two arguments: the first argument specifies the pin number, and the second argument specifies the signal to be written (HIGH or LOW). When a digital signal is written to a pin, the voltage on the pin is set to either 5 volts (HIGH) or 0 volts (LOW), depending on the signal. This is commonly used to turn on or off LEDs, motors, and other digital devices connected to the Arduino board.
      delay(1);                    //delay1ms
      digitalWrite(buzzer, LOW);   //not sound
      delay(1);                    //ms delay
    }
    for (i = 0; i < 100; i++)  // output number of times buzzer is buzzed
    {
      digitalWrite(buzzer, HIGH);  // sound
      delay(2);                    //2ms delay
      digitalWrite(buzzer, LOW);   //not sound
      delay(2);                    //2ms delay
    }
  }
}