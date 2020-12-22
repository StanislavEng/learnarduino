int jj = 1;
const int redLED = 13;
const int myS = 200;
const int myO = 500;
const int oneDone = 1000;

void setup() {
  // put your setup code here, to run once:
  pinMode(redLED,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(jj == 1 || jj == 3){
    for(int ii = 0;ii<3;ii++){
      digitalWrite(redLED,HIGH);
      delay(myS);
      digitalWrite(redLED,LOW);
      delay(myS);
    }
    if(jj == 3){
      jj = 0;
      delay(oneDone);
    }
  }
  else if (jj == 2){
    for(int ii = 0;ii<3;ii++){
      digitalWrite(redLED,HIGH);
      delay(myO);
      digitalWrite(redLED,LOW);
      delay(myO);
  }}
  jj++;
}
