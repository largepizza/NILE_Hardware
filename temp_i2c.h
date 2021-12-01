#ifndef i2c_temp
#define i2c_temp

#include <Arduino.h>

class TempI2C
{
public:
  TempI2C(int address);
  void init();
  double temp();
private:
  int adr;
};

#endif
