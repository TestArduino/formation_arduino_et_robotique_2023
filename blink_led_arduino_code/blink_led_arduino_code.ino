const int led 10 ;
void setup() {
  pinMode(led,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(led,HIGH);
  delay(4100);
   digitalWrite(led,LOW);
  Serial.print("hello blink led");  
}
