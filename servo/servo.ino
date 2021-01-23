#include <Servo.h>

Servo servoMotor; // declaramos variable servo
int cont = 0;
void setup() {
  Serial.begin(9600); // iniciar monitor serie

  // Iniciar el servo
  servoMotor.attach(9);
}

void loop() {
  Serial.print("hola ");
  Serial.println(cont);
  motor3();
  cont++;
}

void motor1(){
  for (int i = 0; i <= 180; i++){
     servoMotor.write(i);
     delay(15);
  }

  for (int i = 179; i >0; i--){
     servoMotor.write(i);
     delay(15);
  }
}
void motor2(){
  servoMotor.write(65); // desplazamos el servo a la posición 0º
  delay(200);
  servoMotor.write(88);
  delay(300);
}

void motor3(){
  servoMotor.write(0);
}
