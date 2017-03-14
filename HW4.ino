
  float R1=1.98;
  float R2=1086000;
  float sensorValue,sensorVoltage;
  float ResistorValue = 1086001.98;
void setup()
{
  pinMode(A0,INPUT);
   Serial.begin(9600);
  Serial.println("Hellow World");
}

void loop() 
{
  float i,vin=5;
  for(i=0;i<5;i++)
   {
    sensorValue  = 0.7*sensorValue + 0.3*analogRead(A0);
   }  
   sensorVoltage = sensorValue*5/1024;
   R1 = sensorVoltage*1086001.98/5;
  Serial.print("sensorVoltage is : ");
  Serial.println(sensorVoltage);
 
  Serial.println("\n\n");
  delay(1500);
}
