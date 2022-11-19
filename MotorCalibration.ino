//centering the motors before robot assembly
#include <Servo.h> 
Servo motor; 
void setup() 
{ 
 motor.attach(1); 
 motor.write(90); 
} 
void loop() 
{ 
 delay(200); 
}