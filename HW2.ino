  float An1,An2,An3;
  float R1=1;
  float R2=1;
  float sensorValue,sensorVoltage;

void setup()
{
  //An1 = 0;
   Serial.begin(9600);
  Serial.println("Hellow World");
}

void loop() 
{
  float i;
  for(i=0;i<5;i++)
   {
    An1 = 0.7*An1 + 0.3*analogRead(A0);
   }  
  float vin1,vin2,vin3;
   vin1 = An1 * 5 / 1024;
   Serial.print("Vin is :");
   Serial.println(vin1);
   
   
   
   
  delay(1500);
}
