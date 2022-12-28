#define ILED D0 //By default NodeMCU has internal led at pin D0
#define ELED D1

void setup()
{
  pinMode(ILED, OUTPUT);
  pinMode(ELED, OUTPUT);
  Serial.begin(9600); // To make an interaction with Serial monitor  
}

void loop()
{
  digitalWrite(ILED, HIGH); // for sending the output data(0or1) to the connected devices 
  digitalWrite(ELED, LOW);
  Serial.println("ILED -> ON"); //For printing the string on serial.monitor 
  delay(2000); 
  digitalWrite(ILED, LOW);
  digitalWrite(ELED, HIGH);
  delay(2000);
  Serial.println("ILED -> OFF");
}
