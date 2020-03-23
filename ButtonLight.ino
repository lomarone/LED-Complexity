/*
 Blinking Button Light

 By: Lauren Marone
*/

const int InternalLED = 13;
const int ExternalLED = 12;
int Button = A0;

void setup() {
  Serial.begin(9600);
  pinMode(Button, INPUT);
  pinMode(InternalLED, OUTPUT);
  pinMode(ExternalLED, OUTPUT);
}

void loop() {
  int buttonFlash = digitalRead(Button);
  Serial.println(buttonFlash);
  delay(1);

  if(buttonFlash == 1){
    digitalWrite(ExternalLED, HIGH);
    delay(50);
    digitalWrite(ExternalLED, LOW);
    delay(50);
  }
  else{
    digitalWrite(ExternalLED, LOW);
  }
  
  
}
