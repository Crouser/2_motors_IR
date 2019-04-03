#define MOTORHV 4
#define MOTORLV 8
#define MOTOR2HV 13
#define MOTOR2LV 12
int  obstacle;

void setup() {

  Serial.begin(9600);

  pinMode(MOTORHV,OUTPUT);
  pinMode(MOTORLV,OUTPUT);
  pinMode(MOTOR2HV,OUTPUT);
  pinMode(MOTOR2LV,OUTPUT);
  pinMode(2,OUTPUT);
  pinMode(1,INPUT);
  
}

  
  



void loop() {

  obstacle=digitalRead(1);
  

  if(Serial.available())
  {
    if(obstacle==1)
    {
      digitalWrite(MOTORHV,LOW);
      digitalWrite(MOTORHV,LOW);
      digitalWrite(MOTOR2HV,LOW);
      digitalWrite(MOTOR2HV,LOW);
    }
   


   else if(obstacle==0)
   {
    digitalWrite(MOTOR2HV,HIGH);
  digitalWrite(MOTOR2LV,LOW);
  digitalWrite(MOTORHV,HIGH);
  digitalWrite(MOTORLV,LOW);
   }

   
   }
    digitalWrite(MOTOR2HV,HIGH);
  digitalWrite(MOTOR2LV,LOW);
  digitalWrite(MOTORHV,HIGH);
  digitalWrite(MOTORLV,LOW);

   
  
   delay(100);
}

    


  
  
  
