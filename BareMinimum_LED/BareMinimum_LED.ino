  int ii = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(7,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  /*digitalWrite(13,HIGH);
  delay(100);
  digitalWrite(13,LOW);
  delay(500);
  digitalWrite(4,HIGH);
  delay(100);
  digitalWrite(4,LOW);
  delay(500);
  digitalWrite(7,HIGH);
  delay(100);
  digitalWrite(7,LOW);
  delay(500);*/
  /*for(int ii = 0; ii <  5; ii++){
    digitalWrite(13,HIGH);
    delay(100);
    digitalWrite(13,LOW);
    delay(500);
  }
  for(int ii = 0; ii < 10; ii++){
    digitalWrite(4,HIGH);
    delay(100);
    digitalWrite(4,LOW);
    delay(500);
  }
  for(int ii = 0; ii < 15; ii++){
    digitalWrite(7,HIGH);
    delay(100);
    digitalWrite(7,LOW);
    delay(500);
  }*/
  /*for(int ii = 0; ii < 5; ii++){
    digitalWrite(13,HIGH);
    digitalWrite(4,HIGH);
    digitalWrite(7,HIGH);
    delay(100);
    digitalWrite(13,LOW);
    digitalWrite(4,LOW);
    digitalWrite(7,LOW);
    delay(500);
  }
  for(int ii = 0; ii < 5; ii++){
    digitalWrite(4,HIGH);
    digitalWrite(7,HIGH);
    delay(100);
    digitalWrite(4,LOW);
    digitalWrite(7,LOW);
    delay(500);
  }
  for(int ii = 0; ii < 5; ii++){
    digitalWrite(7,HIGH);
    delay(100);
    digitalWrite(7,LOW);
    delay(500);
  }*/
  if(ii < 5){
    digitalWrite(13,HIGH);
    digitalWrite(4,HIGH);
    digitalWrite(7,HIGH);
    delay(100);
    digitalWrite(13,LOW);
    digitalWrite(4,LOW);
    digitalWrite(7,LOW);
    delay(500);
    ii++;
  }
  else if(ii < 10){
    digitalWrite(4,HIGH);
    digitalWrite(7,HIGH);
    delay(100);
    digitalWrite(4,LOW);
    digitalWrite(7,LOW);
    delay(500);
    ii++;
  }
  else {
    digitalWrite(7,HIGH);
    delay(100);
    digitalWrite(7,LOW);
    delay(500);
    ii++;
  }
  if(ii == 15)
    ii = 0;

  
}
