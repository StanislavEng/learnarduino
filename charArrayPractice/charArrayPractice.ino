char sent[32]; 
char buffsize;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(F("Please enter your text"));
  while (Serial.available() == 0){
  }
  delay(50);
  int readSize = Serial.available();
  if (readSize <= 32){
    for (int ii = 0; ii < readSize; ii++){
      sent[ii] = Serial.read();
    }
  }
  else {
    Serial.println(F("Sorry, too long. Try again"));
    while (Serial.available())
      Serial.read ();
    delay(3000);
  }
  Serial.println(readSize);
  readmyString();
}

void readmyString (){
  Serial.println(sent);
  delay(1000);
}
