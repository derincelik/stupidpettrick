int reading;
int red = 10;
int yellow = 9;
int blue = 8;

void setup() {
  
  Serial.begin(9600);
  pinMode(10, OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(A0,INPUT);
 
}

void loop() {

  reading = analogRead(A0); //sensor reading 0-1023
 
  if (reading < 130) {
    digitalWrite(blue,HIGH);
    digitalWrite(yellow, LOW);
    digitalWrite(red, LOW);
  }

  else if (reading >= 130 && reading < 133) {
    digitalWrite(blue, LOW);
    digitalWrite(yellow, HIGH);
    digitalWrite(red, LOW);
  }
    
  else if (reading >= 133) {
    digitalWrite(blue, LOW);
    digitalWrite(yellow, LOW);
    digitalWrite(red,HIGH);
  }

  Serial.println(reading);
  delay(250);
}
