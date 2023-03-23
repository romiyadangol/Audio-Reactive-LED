const int SENSOR_PIN = 2;
const int Light_PIN = 12;
 
void setup ()  
{   
  pinMode(SENSOR_PIN, INPUT); // Set the Sensor pin as INPUT  
  pinMode(Light_PIN, OUTPUT);  // Set the BUZZER pin as OUTPUT 
}  
void loop ()  
{
  int Sensor_Val = digitalRead(SENSOR_PIN);  //get reading from microphone
  
  if (Sensor_Val == HIGH) //If Sound Sensor Detected the Clap Sound
  {
    digitalWrite(Light_PIN, HIGH);
    delay(30);
    digitalWrite(Light_PIN, LOW);
  }
  else
  {
    digitalWrite(Light_PIN, LOW);
  }
}
