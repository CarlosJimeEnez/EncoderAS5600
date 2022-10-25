#include <Arduino.h>
#include <Wire.h>
#include <AS5600.h>
#include <Encoder.h>
#define tcaAddress 0x70
#include <vector>

using namespace std;
Encoder encoder1(0, 0, 0);
vector<float> returnPrueba;

void setup()
{
  Serial.begin(115200);
  Wire.begin();

  // Busca la direccion del bus i2c y toma el valor actual en ese momento. 
  encoder1.setupCero();
}

void loop()
{
  encoder1.mapVal();     
  //360 -> Si el motor da solo una vuel
  Serial.println(encoder1.SumDegTotal(360)); 
  //float valorTotal = encoder1.SumDegTotal(2516.4);
  //Serial.println("Val mapeado: " + String(valorTotal));
}
