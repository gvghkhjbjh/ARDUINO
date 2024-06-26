const int ledpin=13;
const int buttonpin=2;
int buttonstate=0;
void setup() {
 pinMode(ledpin,OUTPUT);
 pinMode(buttonpin,OUTPUT);
}
void loop(){
buttonstate = digitalRead(buttonpin);

if(buttonstate==HIGH)
 {
 digitalWrite(ledpin,HIGH);
 }
 else
 {
  digitalWrite(ledpin,LOW);

}
}