
int digitalOut = 13;
int analogPin = A3;
int analogOut = 10;

int inputLevel;


int brightness(int pot) {
  // convert a 10-bit analog signal into an 8-bit analog signal
  // pot is a value between 0 and 1023, representing an analog signal
  // converted to a 10-bit resolution
  // the goal is to scale this number down to the range [0, 255]
  return float(pot) / 1024 * 256;

}



void setup() {
  Serial.begin(9600);
  // pinMode(output, OUTPUT);

}

void loop() {
  inputLevel = analogRead(analogPin);
  Serial.println(brightness(inputLevel));
  analogWrite(analogOut, brightness(inputLevel));

  delay(1); 

}




