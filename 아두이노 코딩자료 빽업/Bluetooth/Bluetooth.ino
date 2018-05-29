#include "SoftwareSerial.h"
SoftwareSerial BTSerial(2,3);
int val;

void setup() {
  Serial.begin(115200);
  BTSerial.begin(9600);
}

void loop() {
  if(BTSerial.available()){
    val = int(BTSerial.read());
    if(val == 49){
      Serial.write(0);
    }}
}
