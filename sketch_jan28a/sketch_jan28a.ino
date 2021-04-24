void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  char myTmp[] = "Last known state";
  int testsize = sizeof myTmp;
  Serial.println(testsize);
  delay(500);
  int eeAddress = 0;
  eeAddress = sizeof myTmp;
  Serial.println(eeAddress);
  delay(5000);
}
