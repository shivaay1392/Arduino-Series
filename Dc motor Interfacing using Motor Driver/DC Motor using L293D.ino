#define IN1 2
#define IN2 3 //for controlling Motor1 

#define IN3 4
#define IN4 5 //for controlling Motor 2

void setup()
{
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  digitalWrite(IN1, HIGH); 
  digitalWrite(IN2, LOW); //Motor1 -> Reverse Direction 
  delay(2000);
  digitalWrite(IN4, HIGH); 
  digitalWrite(IN3, LOW); // Motor2 .-> Forward Direction along with Motor 1 in Reverse Direction 
  delay(2000);
  digitalWrite(IN2, HIGH); 
  digitalWrite(IN1, LOW); //Motor1 -> Forward Direction along with Motor 2 in Forward Direction 
  delay(2000);
  digitalWrite(IN3, HIGH); 
  digitalWrite(IN4, LOW);  //Motor 2 -> Reverse Direction along with Motor 1 in Foward Direction 
  delay(2000);
}
