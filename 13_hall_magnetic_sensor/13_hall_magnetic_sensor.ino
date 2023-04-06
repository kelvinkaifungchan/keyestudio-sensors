// It senses the magnetic materials within a detection range up to 3cm.
// The detection range and the strength of the magnetic field are proportional.
// The output is digital on/off. This sensor uses the SFE Reed Switch - Magnetic Field Sensor.

// Difference to reed switch:
// Sensitivity: Hall magnetic sensors are generally more sensitive than reed switches. They can detect weaker magnetic fields and can be used in a wider range of applications.
// Contactless: Hall magnetic sensors are contactless, meaning they do not require physical contact with the magnet or magnetic field. Reed switches, on the other hand, have metal contacts that physically move and touch when the magnetic field is present, which can cause wear and tear over time.
// Size and shape: Hall magnetic sensors come in various sizes and shapes and can be integrated into other electronic components. Reed switches are generally small and cylindrical or rectangular in shape.
// Output signal: Hall magnetic sensors provide an analog or digital output signal that can be easily integrated into other electronics. Reed switches provide a simple on/off signal and require additional circuitry to convert the signal into a usable form.


int ledPin = 11;   // choose the pin for the LED
int inputPin = 3;  // Connect sensor to input pin 3
int val = 0;       // variable for reading the pin status

void setup() {
  pinMode(ledPin, OUTPUT);   // declare LED as output
  pinMode(inputPin, INPUT);  // declare pushbutton as input
}

void loop() {
  val = digitalRead(inputPin);  // read input value
  if (val == HIGH) {            // check if the input is HIGH
    digitalWrite(ledPin, LOW);  // turn LED OFF
  } else {
    digitalWrite(ledPin, HIGH);  // turn LED ON
  }
}