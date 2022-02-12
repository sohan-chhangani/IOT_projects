int e=13;
int d=12;
int c=11;
int dp=10;
int b=9;
int a=8;
int f=7;
int g=6;
//--one--
void one()
{
  digitalWrite(e,HIGH);
  digitalWrite(d,HIGH);
  digitalWrite(c,LOW);
  digitalWrite(dp,HIGH);
  digitalWrite(b,LOW);
  digitalWrite(a,HIGH);
  digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);
}
//--two--
void two()
{
  digitalWrite(e,LOW);
  digitalWrite(d,LOW);
  digitalWrite(c,HIGH);
  digitalWrite(dp,HIGH);
  digitalWrite(b,LOW);
  digitalWrite(a,LOW);
  digitalWrite(f,HIGH);
  digitalWrite(g,LOW);
}
//--three--
void three()
{
  digitalWrite(e,HIGH);
  digitalWrite(d,LOW);
  digitalWrite(c,LOW);
  digitalWrite(dp,HIGH);
  digitalWrite(b,LOW);
  digitalWrite(a,LOW);
  digitalWrite(f,HIGH);
  digitalWrite(g,LOW);
}
//--four--
void four()
{
  digitalWrite(e,HIGH);
  digitalWrite(d,HIGH);
  digitalWrite(c,LOW);
  digitalWrite(dp,HIGH);
  digitalWrite(b,LOW);
  digitalWrite(a,HIGH);
  digitalWrite(f,LOW);
  digitalWrite(g,LOW);
}
//--five--
void five()
{
  digitalWrite(e,HIGH);
  digitalWrite(d,LOW);
  digitalWrite(c,LOW);
  digitalWrite(dp,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(a,LOW);
  digitalWrite(f,LOW);
  digitalWrite(g,LOW);
}
//--six--
void six()
{
  digitalWrite(e,LOW);
  digitalWrite(d,LOW);
  digitalWrite(c,LOW);
  digitalWrite(dp,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(a,LOW);
  digitalWrite(f,LOW);
  digitalWrite(g,LOW);
}
//--seven--
void seven()
{
  digitalWrite(e,HIGH);
  digitalWrite(d,HIGH);
  digitalWrite(c,LOW);
  digitalWrite(dp,HIGH);
  digitalWrite(b,LOW);
  digitalWrite(a,LOW);
  digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);
}
//--eight--
void eight()
{
  digitalWrite(e,LOW);
  digitalWrite(d,LOW);
  digitalWrite(c,LOW);
  digitalWrite(dp,LOW);
  digitalWrite(b,LOW);
  digitalWrite(a,LOW);
  digitalWrite(f,LOW);
  digitalWrite(g,LOW);
}
//--nine--
void nine()
{
  digitalWrite(e,HIGH);
  digitalWrite(d,LOW);
  digitalWrite(c,LOW);
  digitalWrite(dp,HIGH);
  digitalWrite(b,LOW);
  digitalWrite(a,LOW);
  digitalWrite(f,LOW);
  digitalWrite(g,LOW);
}
//--zero--
void zero()
{
  digitalWrite(e,LOW);
  digitalWrite(d,LOW);
  digitalWrite(c,LOW);
  digitalWrite(dp,LOW);
  digitalWrite(b,LOW);
  digitalWrite(a,LOW);
  digitalWrite(f,LOW);
  digitalWrite(g,HIGH);
}

//--------setup---------
void setup() {
pinMode(e,OUTPUT);  
pinMode(d,OUTPUT);
pinMode(c,OUTPUT);
pinMode(dp,OUTPUT);
pinMode(b,OUTPUT);
pinMode(a,OUTPUT);
pinMode(f,OUTPUT);
pinMode(g,OUTPUT);
}

//--loop sequence--
void loop() {
 one();
 delay(1000);
 two();
 delay(1000);
 three();
 delay(1000);
 four();
 delay(1000);
 five();
 delay(1000);
 six();
 delay(1000);
 seven();
 delay(1000);
 eight();
 delay(1000);
 nine();
 delay(1000);
 zero();
 delay(1000);
}
