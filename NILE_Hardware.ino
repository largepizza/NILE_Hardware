#include "temp_i2c.h"

#include <Wire.h>

TempI2C test(0x48);
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("Starting...");
  test.init();
}

void loop() {
  // put your main code here, to run repeatedly:
  double val = test.temp();
  Serial.println(val);
  delay(100);
}
