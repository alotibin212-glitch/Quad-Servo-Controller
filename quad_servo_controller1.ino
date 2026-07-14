#include <Servo.h>
//NORAH
Servo myServo1;
Servo myServo2;
Servo myServo3;
Servo myServo4;

void setup() {
  myServo1.attach(9);
  myServo2.attach(6);
  myServo3.attach(5);
  myServo4.attach(3);

  for (int pos = 0; pos <= 180; pos += 2) {
    myServo1.write(pos);
    myServo2.write(pos);
    myServo3.write(pos);
    myServo4.write(pos);
    delay(11); 
  }
  
  for (int pos = 180; pos >= 0; pos -= 2) {
    myServo1.write(pos);
    myServo2.write(pos);
    myServo3.write(pos);
    myServo4.write(pos);
    delay(11); 
  }

  myServo1.write(90);
  myServo2.write(90);
  myServo3.write(90);
  myServo4.write(90);
}

void loop() {
}