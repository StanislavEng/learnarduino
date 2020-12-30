int j = 0;
int dti = 500;
int x = 5; 
int y = 7;
int z;
String mstri = "j = ";
String ostr  = " + ";
String mess1 = "A Circle with Radius ";
String mess2 = " Has an Area of ";
float pi = 3.14;
float r = 2;
float area;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  //Serial.print(mstri);
  //Serial.println(j);
  //j = j +1;
  /*
  z = x+y;
  Serial.print(x);
  Serial.print(ostr);
  Serial.print(y);
  //Serial.print(" = ");
  //Serial.println(z);
  */
  area = pi*r*r;
  Serial.print(mess1);
  Serial.print(r);
  Serial.print(mess2    );
  Serial.print(area);
  Serial.println(".");
  delay(dti);
  r = r+.5;
}
