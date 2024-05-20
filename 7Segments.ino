int dp=13;
int A=12;
int B=14;
int C=27;
int D=26;
int E=25;
int F=33;
int G=32;
void setup(void)
{
  pinMode(A,OUTPUT);
  pinMode(B,OUTPUT);
  pinMode(C,OUTPUT);
  pinMode(D,OUTPUT);
  pinMode(E,OUTPUT);
  pinMode(F,OUTPUT);
  pinMode(G,OUTPUT);
  pinMode(dp,OUTPUT);
  pinMode(36, INPUT_PULLUP);
}
void zero(void)
{
  digitalWrite(A,HIGH);
  digitalWrite(B,HIGH);
  digitalWrite(C,HIGH);
  digitalWrite(D,HIGH);
  digitalWrite(E,HIGH);
  digitalWrite(F,HIGH);
  digitalWrite(G,LOW);
  digitalWrite(dp,LOW);
}
void one(void)
{
  digitalWrite(A,LOW);
  digitalWrite(B,HIGH);
  digitalWrite(C,HIGH);
  digitalWrite(D,LOW);
  digitalWrite(E,LOW);
  digitalWrite(F,LOW);
  digitalWrite(G,LOW);
  digitalWrite(dp,LOW);
}
void two(void)
{
  digitalWrite(A,HIGH);
  digitalWrite(B,HIGH);
  digitalWrite(C,LOW);
  digitalWrite(D,HIGH);
  digitalWrite(E,HIGH);
  digitalWrite(F,LOW);
  digitalWrite(G,HIGH);
  digitalWrite(dp,LOW);
}
void three(void)
{
  digitalWrite(A,HIGH);
  digitalWrite(B,HIGH);
  digitalWrite(C,HIGH);
  digitalWrite(D,HIGH);
  digitalWrite(E,LOW);
  digitalWrite(F,LOW);
  digitalWrite(G,HIGH);
  digitalWrite(dp,LOW);
}
void four(void)
{
  digitalWrite(A,LOW);
  digitalWrite(B,HIGH);
  digitalWrite(C,HIGH);
  digitalWrite(D,LOW);
  digitalWrite(E,LOW);
  digitalWrite(F,HIGH);
  digitalWrite(G,HIGH);
  digitalWrite(dp,LOW);
}
void five(void)
{
  digitalWrite(A,HIGH);
  digitalWrite(B,LOW);
  digitalWrite(C,HIGH);
  digitalWrite(D,HIGH);
  digitalWrite(E,LOW);
  digitalWrite(F,HIGH);
  digitalWrite(G,HIGH);
  digitalWrite(dp,LOW);
}
void six(void)
{
  digitalWrite(A,HIGH);
  digitalWrite(B,LOW);
  digitalWrite(C,HIGH);
  digitalWrite(D,HIGH);
  digitalWrite(E,HIGH);
  digitalWrite(F,HIGH);
  digitalWrite(G,HIGH);
  digitalWrite(dp,LOW);
}
void seven(void)
{
  digitalWrite(A,HIGH);
  digitalWrite(B,HIGH);
  digitalWrite(C,HIGH);
  digitalWrite(D,LOW);
  digitalWrite(E,LOW);
  digitalWrite(F,LOW);
  digitalWrite(G,LOW);
  digitalWrite(dp,LOW);
}
void eight(void)
{
  digitalWrite(A,HIGH);
  digitalWrite(B,HIGH);
  digitalWrite(C,HIGH);
  digitalWrite(D,HIGH);
  digitalWrite(E,HIGH);
  digitalWrite(F,HIGH);
  digitalWrite(G,HIGH);
  digitalWrite(dp,LOW);
}
void nine(void)
{
  digitalWrite(A,HIGH);
  digitalWrite(B,HIGH);
  digitalWrite(C,HIGH);
  digitalWrite(D,LOW);
  digitalWrite(E,LOW);
  digitalWrite(F,HIGH);
  digitalWrite(G,HIGH);
  digitalWrite(dp,LOW);
}
void loop(void)
{
  int btn=digitalRead(36);
  Serial.print(btn);
  while(true)
  {
  int n;
  n=random(0,10);
  if(n==0)
  {
    zero();
  }
  else if(n==1)
  {
    one();
  }
  else if(n==2)
  {
    two();
  }
  else if(n==3)
  {
    three();
  }
  else if(n==4)
  {
    four();
  }
  else if(n==5)
  {
    five();
  }
  else if(n==6)
  {
    six();
  }
  else if(n==7)
  {
    seven();
  }
  else if(n==8)
  {
    eight();
  }
  else if(n==9)
  {
    nine();
  }
  }
}