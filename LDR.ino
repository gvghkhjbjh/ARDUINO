const int LDR_PIN=A0;
const int LED_PIN=13;
const int THRESHOLD=500;

void setup() {
 
  Serial.begin(9600);
  pinMode(LED_PIN,OUTPUT);
  
}

void loop() {
  int ldrValue=analogRead(LDR_PIN);
  Serial.print("LDR VALUE:");
  Serial.println(ldrValue);
   if (ldrValue<THRESHOLD)
   {
    digitalWrite(LED_PIN,HIGH);
    
   }
  else {
    digitalWrite(LED_PIN,LOW);
    
  }
  delay(500);
  
}
