const int ldrPin = A5;
const int led_red = 2;

void setup(){
  Serial.begin(9600);
  
  pinMode(led_red, OUTPUT);
  pinMode(ldrPin, INPUT);
}

void loop(){
  int ldrStatus = analogRead(ldrPin);

  if (ldrStatus <= 200) {
    digitalWrite(led_red, HIGH);
    Serial.print("Its DARK, Turn on the LED : ");
    Serial.println(ldrStatus);
  } 
  else {
    digitalWrite(led_red, LOW);
    Serial.print("Its BRIGHT, Turn off the LED : ");
    Serial.println(ldrStatus);
  }
  
  delay(50);

}
