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
  // Configura el 0 del encoder:
  encoder1.setupCero();
}

void loop()
{
  encoder1.mapVal();
  float valorTotal = encoder1.SumDegTotal(2516.4);
  Serial.println("Val mapeado: " + String(valorTotal));
}
