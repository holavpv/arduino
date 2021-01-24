const int LEDPin    = 13;
const int threshold = 100;
const long A        = 1000;     //Resistencia en oscuridad en KΩ
const int B         = 15;        //Resistencia a la luz (10 Lux) en KΩ
const int Rc        = 10;       //Resistencia calibracion en KΩ
const int LDRPin    = A0;   //Pin del LDR

int luz;
int V;
int ilum;

void setup() {
  Serial.begin(9600);
  pinMode(LEDPin, OUTPUT);
  pinMode(LDRPin, INPUT);
}
 
void loop() {
  ejemplo4();
}

// ---------------------------------------
void ejemplo1(){
   int value = digitalRead(LDRPin);
   if (value == HIGH)
   {
      digitalWrite(LEDPin, HIGH);
      delay(50);
      digitalWrite(LEDPin, LOW);
      delay(50);
   }
}

void ejemplo2(){
   int input = analogRead(LDRPin);
   if (input > threshold) {
      digitalWrite(LEDPin, HIGH);
   }
   else {
      digitalWrite(LEDPin, LOW);
   }
}

void ejemplo3(){
   V = analogRead(LDRPin);         
 
   //ilum = ((long)(1024-V)*A*10)/((long)B*Rc*V);  //usar si LDR entre GND y A0 
   ilum = ((long)V*A*10)/((long)B*Rc*(1024-V));    //usar si LDR entre A0 y Vcc (como en el esquema anterior)
  
   Serial.println(ilum);   
   delay(1000);
}

void ejemplo4(){
   luz = analogRead(LDRPin);         
   Serial.println(luz);   
   delay(20);
}
