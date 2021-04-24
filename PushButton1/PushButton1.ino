byte pbread = 12;
byte LED = 13;
int buttonRead;
    bool LEDmem = false;
int dt = 100;
void setup() {
  // put your setup code here, to run once:
  pinMode(pbread, INPUT);
  pinMode(LED, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
   buttonRead = digitalRead(pbread);
   Serial.println(buttonRead);
   if (buttonRead == 0)
      LEDmem = !LEDmem;
   digitalWrite(LED,LEDmem);
   delay(dt);
}
