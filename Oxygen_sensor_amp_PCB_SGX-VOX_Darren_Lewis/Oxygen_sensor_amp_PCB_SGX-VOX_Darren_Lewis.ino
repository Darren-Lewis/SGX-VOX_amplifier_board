/*
   This code is for reading the SGX-VOX oxygen sensor via the
   "Oxygen sensor amp" PCB with 50x gain circuit

   PCB origonally designed for use with OpenVent-Bristol COVID ventilator V2.0
   https://www.instructables.com/OpenVent-Bristol-V20-COVID-19-Rapid-Manufacture-Ve/
   https://openventbristol.co.uk/

   Code written by Darren Lewis
*/

#define backgroundReading 645 // put in here the voltage (in mV) read by your circuit with ambient/background O2 level (air should be 21% oxygen)

void setup() {
  Serial.begin(9600);

  Serial.print("Voltage (mV)");
  Serial.print("  ");
  Serial.println("O2 level (%)");
}

void loop() {
  static int scaleFactor = backgroundReading / 21;    // calculates the linear multiplier for calculating all oxy readings
  int sensorValue = analogRead(A0);                   // raw 10bit ADC reading
  int sensorVoltage = sensorValue * (5000 / 1023);    // convert to mV
  int O2_level = sensorVoltage / scaleFactor;

  Serial.print(sensorVoltage);
  Serial.print("  ");
  Serial.println(O2_level);
}
