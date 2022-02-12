int red=6;
int blue=7;
int yellow=8;
int green=9;
void setup() {
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
}

void loop() {
 digitalWrite(red,HIGH);
 delay(200);
 digitalWrite(blue,HIGH);
 delay(104);
 digitalWrite(yellow,HIGH);
 delay(108);
 digitalWrite(green,HIGH);
 delay(112);
 digitalWrite(red,LOW);
 delay(10);
 digitalWrite(blue,LOW);
 delay(100);
 digitalWrite(yellow,LOW);
 delay(100);
 digitalWrite(green,LOW);
 delay(100);
 
} 
