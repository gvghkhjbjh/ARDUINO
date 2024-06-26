 const int buzzerpin=9; 
      void setup() {
 pinMode(buzzerpin,OUTPUT);
}

void loop() {
  
tone(buzzerpin,2000);
  delay(100);
  noTone(buzzerpin);
  delay(100);
  tone(buzzerpin,1000);
  delay(500);
  noTone(buzzerpin);
  delay(500);

tone(buzzerpin,3000);
  delay(300);
  noTone(buzzerpin);
  delay(300);
  tone(buzzerpin,1500);
  delay(800);
  noTone(buzzerpin);
  delay(800);
  
tone(buzzerpin,4000);
  delay(200);
  noTone(buzzerpin);
  delay(200);
  tone(buzzerpin,800);
  delay(400);
  noTone(buzzerpin);
  delay(400);
}
