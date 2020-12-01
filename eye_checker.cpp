int led = 13;
int pot = A0;
int settedFreq;
void setup(){
  Serial.begin(9600);
  pinMode(led,OUTPUT);
  pinMode(pot,INPUT);
}

void loop(){
  int potVal = analogRead(pot);
  settedFreq = map(potVal,0,1023,1,120);
  Serial.println(settedFreq);
  led_blink();
}

void led_blink(){
  int delayTime = (1000/settedFreq)/2;
  digitalWrite(led,1);
  delay(delayTime);
  digitalWrite(led,0);
  delay(delayTime);
}