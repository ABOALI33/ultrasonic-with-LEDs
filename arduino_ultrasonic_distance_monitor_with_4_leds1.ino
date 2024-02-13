long t=0;
long d=0;
int echo =10;
int trig=11;


void setup() {
 pinMode(3,OUTPUT); 
 pinMode(5,OUTPUT);
 pinMode(6,OUTPUT); 
 pinMode(9,OUTPUT);  
 pinMode(trig,OUTPUT); 
 pinMode(echo,INPUT);

 
}

void loop() {
{
digitalWrite(trig,LOW);
delayMicroseconds(2);
digitalWrite(trig,HIGH);
delayMicroseconds(10);
digitalWrite(trig,LOW);
t= pulseIn (echo,HIGH);
d=0.0343*(t/2);
if(d>=100)
{digitalWrite(3,1);}
 else{
   digitalWrite(3,0);
}
  if(d>=200)
  {
    digitalWrite(5,1);}
  else{
    digitalWrite(5,0);
  }
    if(d>=250)
  {
      digitalWrite(6,1);}
  else{
    digitalWrite(6,0);
  }
 if(d>=320)
  {
   digitalWrite(9,1);}
  else{
    digitalWrite(9,0);
  }
  
  
}
}