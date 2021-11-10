#include <Servo.h>
Servo servo1,servo2;  
int pos = 90;   //Use 'pos' variable to store servo position
void setup() 
{
  servo1.attach(4);  // attaches the servo on pin 4 to the servo object
  servo2.attach(5);  // attaches the servo on pin 5 to the servo object
}

void loop() 
{
  
    servo1.write(pos);              //tells the servo  1 to go to position in variable 'pos'
    servo2.write(pos);              //tells the servo  2 to go to position in variable 'pos'

                  
}
