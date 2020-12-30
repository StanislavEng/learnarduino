int myNum;
int myPWM = 6;
float OVA;
String msg = "Please Enter Your Number: ";
String msg2 = "Your Number is: ";
String msg3 = "How Many Blinks Do You Want? ";
int j;
int numB;
void setup() {
  // put your setup code here, to run once:
  pinMode(myPWM, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(msg);
  while (Serial.available()==0){  
  }
  myNum = Serial.parseInt();
  OVA = myNum*(255./1023.);
  Serial.println(msg3);
  while (Serial.available()==0){  
  }
  numB = Serial.parseInt();
  Serial.print("Your value is ");
  Serial.println(OVA);
  Serial.print("You want to blink this many times: ");
  Serial.println(numB);
  for (j = 1; j <= numB; j=j+1){
    analogWrite(myPWM,OVA);
    //digitalWrite(myPWM, HIGH);
    delay(500);
    analogWrite(myPWM,0);
    //digitalWrite(myPWM,LOW);
    delay(500);  
  }
  delay(1000);

}
