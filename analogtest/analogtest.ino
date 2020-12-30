int anpin = A3; 
float val = 0;
int delayTime = 200;
int readval = 0;
int digpin = 13;
int Gled = 2;
int Bled = 4;
int Rled = 7;

void setup() {
  // put your setup code here, to run once:
  pinMode(anpin,INPUT);
  pinMode(digpin,OUTPUT);
  pinMode(Gled, OUTPUT);
  pinMode(Bled, OUTPUT);
  pinMode(Rled, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  readval = analogRead(anpin);
  val = readval*(5./1024.);//readval;
  Serial.print("The Poteniometer Value is: ");
  Serial.println(val);

  if(val <= 3.3){
    digitalWrite(Gled, HIGH);
    digitalWrite(Rled, LOW);
    digitalWrite(Bled, LOW);
  }
  if (val > 3.3 && val < 4.3){
    digitalWrite(Gled, LOW);
    digitalWrite(Rled, LOW);
    digitalWrite(Bled, HIGH);
  }
  if (val > 4.3){
    digitalWrite(Gled, LOW);
    digitalWrite(Rled, HIGH);
    digitalWrite(Bled, LOW);
  }
  delay(delayTime);
}
