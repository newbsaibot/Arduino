int led = 9;
int onTime = 500;
int offTime = 500;


void setup() {
  // put your setup code here, to run once:
  pinMode(led,OUTPUT);
  
  
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led,HIGH);
  delay(onTime);
  digitalWrite(led,LOW);
  delay(offTime);
  
}
