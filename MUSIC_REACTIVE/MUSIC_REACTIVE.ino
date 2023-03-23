int soundsensor = 8; 
int ledstrip = 9;                 
void setup()
{ 
  pinMode (soundsensor, INPUT);
  pinMode (ledstrip, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int sensorvalue = digitalRead (soundsensor);             
                                                          
  if (sensorvalue == 1)                                    
  {
    digitalWrite(ledstrip, HIGH);
    delay(10);
  }
  
  else
  {
    digitalWrite(ledstrip, LOW);
  }
  Serial.println(sensorvalue);
  
}
