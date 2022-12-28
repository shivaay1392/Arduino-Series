const int A = 2;
const int B = 3;
const int C = 4;
const int D = 5;
const int E = 6;
const int F = 7;
const int G = 8;

int count =0; //Value of count is use to display the numbers on 7 Segment LED
void setup()
{
  Serial.begin(9600);
  for(int i=2; i<=8; i++)
  {
    pinMode(i, OUTPUT); //setting pins to output 
  }
}

void loop()
{
  switch (count)
  {
    case 0: digitalWrite(A,LOW);
            digitalWrite(B,LOW);
            digitalWrite(C,LOW);
            digitalWrite(D,LOW);
            digitalWrite(E,LOW);
            digitalWrite(F,LOW);
            digitalWrite(G,HIGH);
            break; 
    
    case 1: digitalWrite(A,HIGH);
            digitalWrite(B,LOW);
            digitalWrite(C,LOW);
            digitalWrite(D,HIGH);
            digitalWrite(E,HIGH);
            digitalWrite(F,HIGH);
            digitalWrite(G,HIGH);
            break;
            
   case 2: digitalWrite(A,LOW);
            digitalWrite(B,LOW);
            digitalWrite(C,HIGH);
            digitalWrite(D,LOW);
            digitalWrite(E,HIGH);
            digitalWrite(F,LOW);
            digitalWrite(G,LOW);
            break;
          // same scanerio goes to till count 9
  }
  
  if (count<10)
   {
    count=count+1;
    delay(1000);
   }
   else 
   {
    count=0; //again set count =0
    delay(1000);
   }
}
