//necessary centering of the motors before the robot assembly 
//center every servo so full range of motion can be reached
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
