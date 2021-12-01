#include "temp_i2c.h"
#include "adc_i2c.h"
#include <Wire.h>

TempI2C TEMP(0x48);
ADCI2C ADC1(0x28);
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("Starting...");
  TEMP.init();
  ADC1.init();
}

void loop() {
  // put your main code here, to run repeatedly:
  double val = TEMP.temp();
  int adc0 = ADC1.read(0);
  int adc1 = ADC1.read(1);
  int adc2 = ADC1.read(2);
  Serial.print("Temp: ");
  Serial.println(val);
  Serial.print("ADC0 = ");
  Serial.println(adc0);
  Serial.print("ADC1 = ");
  Serial.println(adc1);
  Serial.print("ADC2 = ");
  Serial.println(adc2);
  delay(500);
}
