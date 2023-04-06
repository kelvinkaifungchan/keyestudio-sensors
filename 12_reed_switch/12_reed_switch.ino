// Reed Switch is a special switch and a main component for reed relay and proximity switch. Reed switch is usually comprised of two soft magnetic materials and metal reed contacts which will disconnect itself when there is no magnetic.

// Reed switches are commonly used in electronic circuits for sensing the presence or absence of a magnetic field.

byte Led = 11;       //define LED interface
byte buttonpin = 3;  //define magnetic ring sensor interface
int val;            //define digital variable val
void setup() {
  pinMode(Led, OUTPUT);       //define LED as output interface
  pinMode(buttonpin, INPUT);  //define magnetic ring sensor as output interface
}
void loop() {
  val = digitalRead(buttonpin);  // read and assign the value of digital interface 3 to val
  if (val == HIGH)               //When a signal is detected by magnetic ring sensor, LED will flash
  {
    digitalWrite(Led, HIGH);
  } else {
    digitalWrite(Led, LOW);
  }
}