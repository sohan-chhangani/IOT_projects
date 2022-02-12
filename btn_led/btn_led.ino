int led=11;
int btn=2;
volatile int state = LOW;
void setup() {
pinMode(led,OUTPUT);
attachInterrupt(0,stateChange, FALLING);

}

void loop() {
digitalWrite(led,state);
}
void stateChange()
{
  if(digitalRead(btn)==LOW)
  {
    delayMicroseconds(1000);
    if(digitalRead(btn)==LOW)
    {
      state=!state;
    }
  }
  }
