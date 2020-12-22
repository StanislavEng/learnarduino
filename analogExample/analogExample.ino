int LED1 = 9;
int bright = 255; // 
int myoff = 0;
int dim = 128;
int dim1 = 64;
int dim2 = 200;
int mylow = 20;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED1,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(LED1,bright); // equivalent to HIGH
  delay(1000);
  analogWrite(LED1,myoff);
  delay(1000);
  analogWrite(LED1,dim);
  delay(1000);
  analogWrite(LED1,myoff);
  delay(1000);

  analogWrite(LED1,mylow );
  delay(1000);
  analogWrite(LED1,dim1); // equivalent to HIGH
  delay(1000);
  analogWrite(LED1,dim);
  delay(1000);
  analogWrite(LED1,dim2);
  delay(1000);
  analogWrite(LED1,bright);
  delay(1000);
  analogWrite(LED1,myoff);
  delay(1000);
  
}
