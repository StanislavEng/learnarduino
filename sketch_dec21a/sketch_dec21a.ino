/*void setup() {
  // put your setup code here, to run once:
  //Serial.begin(9600);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  //Serial.write("write this");
  //Serial.write("What is your name?");
}*/
const byte ledPin = 13;
const byte interruptPin = 2;
volatile byte state = LOW;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(interruptPin, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(interruptPin), blink, CHANGE);
}

void loop() {
  digitalWrite(ledPin, state);
}

void blink() {
  state = !state;
}
