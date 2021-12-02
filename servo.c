/* 
  Created On: Nov 2021
  Created By: Rodas Nega
 
  This program initiates a rotational cycle for
  the servo at a degree of 90 and back to 0 every 
  one second interval
*/

# include <Servo.h>

Servo servo; // global variable 'servo'

void setup() {
  servo.attach(2);
  servo.write(0);
  delay(2000);
}

void loop() {
  servo.write(90);
  delay(1000); // Wait for 1000 millisecond(s)
  servo.write(0);
  delay(1000); // Wait for 1000 millisecond(s)
}
