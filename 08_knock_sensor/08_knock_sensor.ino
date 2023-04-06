#define SensorLED 11
#define SensorINPUT 2  //Connect the sensor to digital pin 3 which is 1nterrupts 1.
unsigned char state = 0;
void setup() {
  pinMode(SensorLED, OUTPUT);
  pinMode(SensorINPUT, INPUT);
  attachInterrupt(0, blink, FALLING);  // Trigger the blink function when the falling edge is detected

  //   attachInterrupt is an Arduino function used to attach an interrupt service routine (ISR) to a specific interrupt pin. In this case, the function blink() is attached to the interrupt pin 1 using attachInterrupt(1, blink, FALLING) which means that blink() will be executed every time a falling edge is detected on interrupt pin 1.

  // An Interrupt Service Routine (ISR) is a special type of function that is automatically called by the microcontroller when a certain event occurs. In the context of Arduino programming, an ISR is a function that gets executed in response to an interrupt. Interrupts are used to halt the normal flow of the program and handle a specific event that requires immediate attention. The ISR is responsible for handling the event and then returning control back to the main program. Interrupts can be triggered by a variety of sources, such as an external sensor, a timer, or a button press.

  // When the interrupt occurs, state variable is incremented by 1 in the blink() function. In the loop() function, state is checked and if it is not equal to 0, the SensorLED is turned on for 500 milliseconds and state is reset to 0. If state is 0, the SensorLED remains off. This is a simple example of how interrupts can be used in Arduino to perform certain actions when a specific event occurs.
}
void loop() {
  if (state != 0) {
    state = 0;
    digitalWrite(SensorLED, HIGH);
    delay(500);
  } else
    digitalWrite(SensorLED, LOW);
}
void blink()  //Interrupts function
{
  state++;
}