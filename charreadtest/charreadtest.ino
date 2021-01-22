//#define MAXSIZE 50
//const int MAXSIZE = 50;
const byte MAXSIZE = 50;

char msg1[] = "Please enter a phrase";
char msg2[] = "What you wrote was: ";

struct testme {
  char nam[MAXSIZE];
  int len;
};

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
} 

testme test1;
void loop() {
  int ii = 0;
  //char check;
  // put your main code here, to run repeatedly:
  Serial.println(msg1);
  while(Serial.available() == 0){}
  delay(50);
  test1.len = Serial.available(); 
  int curr = test1.len;
  for (ii = 0; ii <= curr; ii++){
    test1.nam[ii] = Serial.read();
  }
  
  Serial.print(msg2);
  
  int siz = sizeof test1.nam / sizeof *test1.nam -1;
  //Serial.println(len);
  curr = test1.len;
  Serial.println(siz);
  for (ii = 0; ii < curr ; ii++){
    //check = test1.nam[ii];
    Serial.print(test1.nam[ii]);
  }
  delay(500);
}
