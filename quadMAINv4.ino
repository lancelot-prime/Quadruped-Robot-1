//added bluetooth control using HC-05 bt module
#include <VarSpeedServo.h>  

char command;
const int servoCount = 8;           
VarSpeedServo motors[servoCount];  


int speed = 100;     
const int angle1 = 30;    
const int angle0 = 0;   
int tempwalk=1;

void setup() {
  Serial.begin(9600);
  motors[0].attach(5, 900, 2100); 
  motors[1].attach(6, 900, 2100);  
  motors[2].attach(7, 900, 2100); 
  motors[3].attach(8, 900, 2100);  
  motors[4].attach(9, 900, 2100); 
  motors[5].attach(10, 900, 2100); 
  motors[6].attach(11, 900, 2100); 
  motors[7].attach(12, 900, 2100); 

}  

void loop() {
  while(Serial.available()>0){
  command= Serial.read();
  Serial.println("command recieved:", command);
  if (command=='F'){
  forward();
  }
  if (command=='R'){
  reverse();
  }
  if (command=='N'){
  neutral();
  }
  if (command=='S'){
  sit();
  }
  }

} 


