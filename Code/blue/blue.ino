#include "SoftwareSerial.h"
SoftwareSerial BTSerial(2,3);
char val;

void setup() {
  Serial.begin(9600);
  BTSerial.begin(9600);
}

void loop() {   
  if (BTSerial.available()){
    val = BTSerial.read();
    Serial.write(val);
    delay(500);
    Serial.print(val);
  }
}

