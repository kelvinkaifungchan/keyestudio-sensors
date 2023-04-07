// One cap lights up while the other one is off.
// Tilt these two caps towards the same side, one cap is gradually become bright, another bright cap is gradually off.

int LedPinA = 3;
int LedPinB = 9;
int ButtonPinA = 2;
int ButtonPinB = 8;
int buttonStateA = 0;
int buttonStateB = 0;
int brightnessA = 0;
int brightnessB = 255;
void setup() {
  Serial.begin(9600);
  pinMode(LedPinA, OUTPUT);
  pinMode(LedPinB, OUTPUT);


  pinMode(ButtonPinA, INPUT);
  pinMode(ButtonPinB, INPUT);
}
void loop() {
  buttonStateA = digitalRead(ButtonPinA);
  if (buttonStateA == HIGH && brightnessA != 255) {
    brightnessA++;
  }
  if (buttonStateA == LOW && brightnessA != 0) {
    brightnessA--;
  }
  analogWrite(LedPinB, brightnessA);
  Serial.print(brightnessA);

  Serial.print("   ");
  buttonStateB = digitalRead(ButtonPinB);
  if (buttonStateB == HIGH && brightnessB != 0) {
    brightnessB--;
  }
  if (buttonStateB == LOW && brightnessB != 255) {
    brightnessB++;
  }
  analogWrite(LedPinA, brightnessB);
  Serial.println(brightnessB);
  delay(5);
}