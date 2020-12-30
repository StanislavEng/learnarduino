
String msg1 = "What color LED would you like me to light up?";
//String c1 = "Red";
///String c2 = "Green";
//String c3 = "Blue;
String c[3] = {"Red", "Green", "Blue"};
String ans;
int rl = 2;
int gl = 4;
int bl = 7;
int j;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(rl, OUTPUT);
  pinMode(gl, OUTPUT);
  pinMode(bl, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(msg1);
  for (j = 0; j < 3; j = j + 1) {
    Serial.print(j);
    Serial.print(". ");
    Serial.println(c[j]);
  }
  while (Serial.available() == 0) {
  }
  ans = Serial.readString();
  /*if(ans == "Red"){
    digitalWrite(rl, HIGH);
    delay(5000);
    digitalWrite(rl,LOW);
    }
    else if(ans == "Green"){
    digitalWrite(gl, HIGH);
    delay(5000);
    digitalWrite(gl,LOW);
    }
    else if(ans == "Blue"){
    digitalWrite(bl, HIGH);
    delay(5000);
    digitalWrite(bl,LOW);
    }*/
  if (ans == "Red" || ans == "red") {
    digitalWrite(rl, HIGH);
    digitalWrite(gl, LOW);
    digitalWrite(bl, LOW);
  }
  else if (ans == "Green" || ans == "green") {
    digitalWrite(rl, LOW);
    digitalWrite(gl, HIGH);
    digitalWrite(bl, LOW);
  }
  else if (ans == "Blue" || ans == "blue") {
    digitalWrite(rl, LOW);
    digitalWrite(gl, LOW);
    digitalWrite(bl, HIGH);
  }
}

/*
  Uses a for loop to print numbers in various formats.


  void setup() {
  Serial.begin(9600); // open the serial port at 9600 bps:
  }

  void loop() {
  // print labels
  Serial.print("NO FORMAT");  // prints a label
  Serial.print("\t");         // prints a tab

  Serial.print("DEC");
  Serial.print("\t");

  Serial.print("HEX");
  Serial.print("\t");

  Serial.print("OCT");
  Serial.print("\t");

  Serial.print("BIN");
  Serial.println();        // carriage return after the last label

  for (int x = 0; x < 64; x++) { // only part of the ASCII chart, change to suit
    // print it out in many formats:
    Serial.print(x);       // print as an ASCII-encoded decimal - same as "DEC"
    Serial.print("\t\t");  // prints two tabs to accomodate the label lenght

    Serial.print(x, DEC);  // print as an ASCII-encoded decimal
    Serial.print("\t");    // prints a tab

    Serial.print(x, HEX);  // print as an ASCII-encoded hexadecimal
    Serial.print("\t");    // prints a tab

    Serial.print(x, OCT);  // print as an ASCII-encoded octal
    Serial.print("\t");    // prints a tab

    Serial.println(x, BIN);  // print as an ASCII-encoded binary
    // then adds the carriage return with "println"
    delay(200);            // delay 200 milliseconds
  }
  Serial.println();        // prints another carriage return
  }*/
