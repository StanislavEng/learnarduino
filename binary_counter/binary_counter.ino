const int LED1 = 13;
const int LED2 =  8;
const int LED3 =  7;
const int LED4 =  4;
const int thedelay = 400;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
  pinMode(LED3,OUTPUT);
  pinMode(LED4,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly
  delay(thedelay);
  digitalWrite(LED1,HIGH);
  delay(thedelay);
  
  digitalWrite(LED1,LOW);
  digitalWrite(LED2,HIGH);
  delay(thedelay);
  
  digitalWrite(LED1,HIGH);
  delay(thedelay);

  digitalWrite(LED1,LOW);
  digitalWrite(LED2,LOW);
  digitalWrite(LED3,HIGH);
  delay(thedelay);

  digitalWrite(LED1,HIGH);
  delay(thedelay);

  digitalWrite(LED1,LOW);
  digitalWrite(LED2,HIGH);
  delay(thedelay);

  digitalWrite(LED1,HIGH);
  delay(thedelay);

  digitalWrite(LED1,LOW);
  digitalWrite(LED2,LOW);
  digitalWrite(LED3,LOW);
  digitalWrite(LED4,HIGH);
  delay(thedelay);

  digitalWrite(LED1,HIGH);
  delay(thedelay);

  digitalWrite(LED1,LOW);
  digitalWrite(LED2,HIGH);
  delay(thedelay);

  digitalWrite(LED1,HIGH);
  delay(thedelay);

  digitalWrite(LED1,LOW);
  digitalWrite(LED2,LOW);
  digitalWrite(LED3,HIGH);
  delay(thedelay);
  
  digitalWrite(LED1,HIGH);
  delay(thedelay);

  digitalWrite(LED1,LOW);
  digitalWrite(LED2,HIGH);
  delay(thedelay);

  digitalWrite(LED1,HIGH);
  delay(thedelay);

  digitalWrite(LED1,LOW);
  digitalWrite(LED2,LOW);
  digitalWrite(LED3,LOW);
  digitalWrite(LED4,LOW);
  delay(thedelay);
}
