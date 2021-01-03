/*#include <EEPROM.h>

struct MyObject {

  float field1;

  byte field2;

  char name[10];
};

void setup() {

  Serial.begin(9600);

  while (!Serial) {

    ; // wait for serial port to connect. Needed for native USB port only

  }

  float f = 123.456f;  //Variable to store in EEPROM.

  int eeAddress = 0;   //Location we want the data to be put.

  //One simple call, with the address first and the object second.

  EEPROM.put(eeAddress, f);

  Serial.println("Written float data type!");

  //Put is designed for use with custom structures also. 

  //Data to store.

  MyObject customVar = {

    3.14f,

    65,

    "Working!"

  };

  eeAddress += sizeof(float); //Move address to the next byte after float 'f'.

  EEPROM.put(eeAddress, customVar);

  Serial.print("Written custom data type! \n\nView the example sketch eeprom_get to see how you can retrieve the values!");
}

void loop() {

}
*/
///////////////////////////////////////////////////////////////////////////////////////////////

#include <EEPROM.h>

void setup() {

  float f = 0.00f;   //Variable to store data read from EEPROM.

  int eeAddress = 0; //EEPROM address to start reading from

  Serial.begin(9600);

  while (!Serial) {

    ; // wait for serial port to connect. Needed for native USB port only

  }

  Serial.print("Read float from EEPROM: ");

  //Get the float data from the EEPROM at position 'eeAddress'

  EEPROM.get(eeAddress, f);

  Serial.println(f, 3);    //This may print 'ovf, nan' if the data inside the EEPROM is not a valid float.

  

//    As get also returns a reference to 'f', you can use it inline.

  //  E.g: Serial.print( EEPROM.get( eeAddress, f ) );

 



    //Get can be used with custom structures too.

    //I have separated this into an extra function.


  secondTest(); //Run the next test.
}

struct MyObject {

  float field1;

  byte field2;

  char name[10];
};

void secondTest() {

  int eeAddress = sizeof(float); //Move address to the next byte after float 'f'.

  MyObject customVar; //Variable to store custom object read from EEPROM.

  EEPROM.get(eeAddress, customVar);

  Serial.println("Read custom object from EEPROM: ");

  Serial.println(customVar.field1);

  Serial.println(customVar.field2);

  Serial.println(customVar.name);
}

void loop() {


}
