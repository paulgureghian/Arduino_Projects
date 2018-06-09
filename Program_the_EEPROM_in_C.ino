#include <EEPROM.h>

void setup() {

  Serial.begin(9600);
}
int data;
int addr;

void loop() {

  String buffer = "";
  buffer = Serial.readString();
  if (buffer.startsWith ("read")) {
    addr = buffer.substring(buffer.indexOf(' ') + 1).toInt();
  //  Serial.print(addr);
  //  Serial.println();
    Serial.println(EEPROM.read(addr));

  } else if (buffer.startsWith("write")) {
    addr = buffer.substring(6, 7).toInt();
    data = buffer.substring(8).toInt();
  //  Serial.print (data);
  //  Serial.println();
  //  Serial.print(addr);
  //  Serial.println();
    EEPROM.write(addr, data);




  }









}












