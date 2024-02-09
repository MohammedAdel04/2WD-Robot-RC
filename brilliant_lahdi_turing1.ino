int IN1=6;
int IN2=5;
int IN3=3;
int IN4=9;
int enable1=11;
int enable2=12;
String seri;
void setup()
{
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  pinMode(enable1,OUTPUT);
  pinMode(enable2,OUTPUT);
  Serial.begin(9600);
}

void loop()
 
{
   if(Serial.available()>0)
   {
    seri = Serial.readString();
    if(seri=="go")
    {
      digitalWrite(enable1,HIGH);
      digitalWrite(enable2,HIGH);
      digitalWrite(IN1,HIGH);
      digitalWrite(IN2,LOW);
      digitalWrite(IN3,HIGH);
      digitalWrite(IN4,LOW);
      Serial.println("go Forward");
    }
    else if(seri=="back")
    {
      digitalWrite(enable1,HIGH);
      digitalWrite(enable2,HIGH);
      digitalWrite(IN1,LOW);
      digitalWrite(IN2,HIGH);
      digitalWrite(IN3,LOW);
      digitalWrite(IN4,HIGH);
      Serial.println("back");
    }
    else if(seri=="go right")
    {
      digitalWrite(enable1,HIGH);
      digitalWrite(enable2,LOW);
      digitalWrite(IN1,HIGH);
      digitalWrite(IN2,LOW);
      digitalWrite(IN3,LOW);
      digitalWrite(IN4,LOW);
      Serial.println("go right");
    }
    else if(seri=="back right")
    {
      digitalWrite(enable1,HIGH);
      digitalWrite(enable2,LOW);
      digitalWrite(IN1,LOW);
      digitalWrite(IN2,HIGH);
      digitalWrite(IN3,LOW);
      digitalWrite(IN4,LOW);
      Serial.println("back right");
    }
    else if(seri=="go left")
    {
      digitalWrite(enable1,LOW);
      digitalWrite(enable2,HIGH);
      digitalWrite(IN1,LOW);
      digitalWrite(IN2,LOW);
      digitalWrite(IN3,HIGH);
      digitalWrite(IN4,LOW);
      Serial.println("go left");
    }
    else if(seri=="back left")
    {
      digitalWrite(enable1,LOW);
      digitalWrite(enable2,HIGH);
      digitalWrite(IN1,LOW);
      digitalWrite(IN2,LOW);
      digitalWrite(IN3,LOW);
      digitalWrite(IN4,HIGH);
      Serial.println("back left");
    }
    else if(seri=="stop")
    {
      digitalWrite(enable1,LOW);
      digitalWrite(enable2,LOW);
      digitalWrite(IN1,LOW);
      digitalWrite(IN2,LOW);
      digitalWrite(IN3,LOW);
      digitalWrite(IN4,LOW);
      Serial.println("Stop");
    }
   }
}