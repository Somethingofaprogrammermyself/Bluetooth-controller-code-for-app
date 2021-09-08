#include <SoftwareSerial.h>

#define TxD 1
#define RxD 2
#define pin_1 2
#define pin_2 3
#define pin_3 4

SoftwareSerial Bluetooth(2,1);

void setup(){


pinMode(2, INPUT);
pinMode(3, INPUT);
pinMode(4, INPUT);

Serial.begin(9600);
Bluetooth.begin(9600);
}

void loop(){

  

    
if (digitalRead(pin_1)== HIGH)
{  
  Serial.write('i');
  Bluetooth.write('i');

   delay(500);

}

if (digitalRead(pin_2)== HIGH){

Serial.write('o');
Bluetooth.write('o');

delay(500);

}



if (digitalRead(pin_3)== HIGH)
{
Serial.write('3');
Bluetooth.write('3');

delay(500);
}
}
