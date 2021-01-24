const int LED1=13;
const int LED2=12;

void setup() {
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT); // solo ejemplo 2
}

void loop() {
  zero();
}

void zero(){
  
}
void ejemplo1(){
  digitalWrite(LED1,HIGH);
  delay(100);
  digitalWrite(LED1,LOW);
  delay(100);
}

void ejemplo2(){
  digitalWrite(LED1,HIGH);
  delay(500);
  digitalWrite(LED1,LOW);
  digitalWrite(LED2,HIGH);
  delay(500);
  digitalWrite(LED2,LOW);
}
