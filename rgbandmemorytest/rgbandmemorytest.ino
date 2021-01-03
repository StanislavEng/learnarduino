#define RED_LED 7
#define GREEN_LED 4
#define BLUE_LED 2
#define DELAYTIME 1000

#define REDPWM 6
#define GREENPWM 5
#define BLUEPWM 3

String msg = "What color do you want to output?";
String msg1 = "Turning on ";
String col;
/*
byte stater = LOW;
byte stateg = LOW;
byte stateb = LOW;
*/
int stater = 0;
int stateg = 0;
int stateb = 0;
bool dirr = true;
bool dirg = true;
bool dirb = true;
int incrm = 63;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
/*  pinMode(RED_LED,OUTPUT);
  pinMode(GREEN_LED,OUTPUT);
  pinMode(BLUE_LED,OUTPUT);*/
  pinMode(REDPWM,OUTPUT);
  pinMode(GREENPWM,OUTPUT);
  pinMode(BLUEPWM,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(msg);
  while(Serial.available()==0){
  }
  col = Serial.readString();
  if (col == "Red" || col == "red" || col == "RED"){
    if ((stater == 0 || stater < 252) && dirr == true){
      stater = stater + incrm;
    }
    else if (stater > 0 && dirr == false){
      stater = stater - incrm;
    }
    else if (stater == 252 && dirr == true){
      dirr = false;
      stater = stater - incrm;
    }
    else if (stater == 0 && dirr == false){
      dirr = true;
      stater = stater + incrm;
    }
    analogWrite(REDPWM,stater);
  }
   if (col == "Green" || col == "green" || col == "GREEN"){
    if (stateg < 252&& dirg == true){
      stateg = stateg + incrm;
    }
    else if (stateg > 0 && dirg == false){
      stateg = stateg - incrm;
    }
    else if (stateg == 252 && dirg == true){
      dirg = false;
      stateg = stateg - incrm;
    }
    else if (stateg == 0 && dirg == false){
      dirg = true;
      stateg = stateg + incrm;
    }
    analogWrite(GREENPWM,stateg);
  }
   if (col == "Blue" || col == "blue" || col == "BLUE"){
    if (stateb < 252 && dirb == true){
      stateb = stateb + incrm;
    }
    else if (stateb > 0 && dirb == false){
      stateb = stateb - incrm;
    }
    else if (stateb == 252 && dirb == true){
      dirb = false;
      stateb = stateb - incrm;
    }
    else if (stateb == 0 && dirb == false){
      dirb = true;
      stateb = stateb + incrm;
    }
    analogWrite(BLUEPWM,stateb);
  }
  Serial.print("Red is : ");
  Serial.print(stater);
  Serial.print(". Green is : ");
  Serial.print(stateg);
  Serial.print(". Blue is : ");
  Serial.println(stateb);
  delay(2*DELAYTIME);
}
