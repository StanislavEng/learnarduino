int yled = 2;
int rled = 9;
int iter = 0;
int dt = 500;
void setup() {
  // put your setup code here, to run once:
  pinMode(yled, OUTPUT);
  pinMode(rled, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  for (iter = 0; iter < 3; iter++){
    digitalWrite(yled,HIGH);
    delay(dt);
    digitalWrite(yled,LOW);
    delay(dt);
  }
  for (iter = 0; iter < 5; iter++){
    digitalWrite(rled,HIGH);
    delay(dt);
    digitalWrite(rled,LOW);
    delay(dt);
  }

  for (iter = 10; iter >= 1; iter=iter-1){
    Serial.println(iter);
    delay(dt);
  }
}
