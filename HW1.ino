const byte LED = 13;

void setup() {
  Serial.begin(9600);
  Serial.println("Hellow World");
  pinMode(LED,OUTPUT);
}

void loop() 
{
 if(Serial.available())
 {
  char val;
    val = Serial.read();
    switch(val)
    {
      case '1':
          digitalWrite(LED, HIGH);
          Serial.println("ON");
          break;
      case '0':
          digitalWrite(LED, LOW);
          Serial.println("OFF");
          break;
           
      default :
          Serial.println("Enter 1 or 0");
          break;
    }
  }

}
