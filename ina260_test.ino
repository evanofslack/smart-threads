#include <Adafruit_INA260.h>

Adafruit_INA260 ina260 = Adafruit_INA260();

void setup() {
  Serial.begin(115200);
  // Wait until serial port is opened
  while (!Serial) { delay(10); }

  //Serial.println("Adafruit INA260 Test");

  if (!ina260.begin()) {
    //Serial.println("Couldn't find INA260 chip");
    while (1);
  }
  //Serial.println("Found INA260 chip");
}

void loop() {
  //Serial.print("Current: ");
  //Serial.print(ina260.readCurrent());
  //Serial.println(" mA");

  //Serial.print("Bus Voltage: ");
  //Serial.print(ina260.readBusVoltage());
  //Serial.println(" mV");

  //Serial.print("Power: ");
  //Serial.print(ina260.readPower());
  //Serial.println(" mW");
  //int voltageOld = ina260.readBusVoltage();
  //int voltage = ina260.readBusVoltage();
  
  //Serial.println();
  delay(500);

  int voltage = ina260.readBusVoltage();

  //int dVolt = (voltage - voltageOld) / .5;

  //int test = dVolt/voltage;

  //Serial.print("D_Voltage: ");
  Serial.print(voltage);
  
  //int current = ina260.readCurrent();
  //int resistance = voltage/current;
  
  //Serial.print("Resistance: ");
  //Serial.print(resistance);

  //Serial.print("Current: ");
  //Serial.print(current);
  //Serial.println();


  
}
