#define ILED 13 //By default arduino has internal led at pin 13 
#define ELED 12 // To connect an external led 

void setup()
{
  pinMode(ILED, OUTPUT); //Setting the led's in output mode
  pinMode(ELED, OUTPUT);
  Serial.begin(9600); // To make an interaction with Serial monitor  
}

void loop()
{
  digitalWrite(ILED, HIGH); // for sending the data(0or1) to the output devices 
  digitalWrite(ELED, LOW);
  Serial.println("ILED -> ON"); //For printing the string on serial.monitor 
  delay(2000); 
  digitalWrite(ILED, LOW);
  digitalWrite(ELED, HIGH);
  delay(2000);
  Serial.println("LED -> OFF");
}
