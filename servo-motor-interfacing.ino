#include <Servo.h>

Servo myServo;

void setup() {
  myServo.attach(7);  // Signal pin connected to D7
}

void loop() {

  myServo.write(0);    // 0 degrees
  delay(1000);

  myServo.write(90);   // 90 degrees
  delay(1000);

  myServo.write(180);  // 180 degrees
  delay(1000);
}
