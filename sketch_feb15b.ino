int ledPin = 13;


int unit = 250;

void setup() {
  pinMode(ledPin, OUTPUT);
}

void dot() {
  digitalWrite(ledPin, HIGH);
  delay(unit);          
  digitalWrite(ledPin, LOW);
  delay(unit);         
}

void dash() {
  digitalWrite(ledPin, HIGH);
  delay(3 * unit);      
  digitalWrite(ledPin, LOW);
  delay(unit);          
}

void loop() {
  // S: ...
  dot();
  dot();
  dot();
  delay(2 * unit);      

  // O: ---
  dash();
  dash();
  dash();
  delay(2 * unit);      

  // S: ...
  dot();
  dot();
  dot();

  delay(4 * unit);     
}