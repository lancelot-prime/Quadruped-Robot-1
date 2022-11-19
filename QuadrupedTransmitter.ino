//transmitter code for the quadruped robot
//four buttons: walk forward(200), walk backward(400),stand in neutral position/stop(600), sit(800) 
#include <VirtualWire.h>
int forward = 1;
int reverse = 2;
int stand = 3;
int sit = 4;
int stop = 5;
int button;
char temparray[5];

void setup() {
  vw_setup(2000);  
  pinMode(forward, INPUT_PULLUP);
  pinMode(reverse, INPUT_PULLUP);
  pinMode(stand, INPUT_PULLUP);
  pinMode(sit, INPUT_PULLUP);
  Serial.begin(9600); 
}

void loop() {
  
  if (digitalRead(forward) == LOW) {
    button = 200;
    itoa(button, temparray, 10);

    vw_send((uint8_t *)temparray, strlen(temparray));  
    vw_wait_tx();                                              
  }
  
  if (digitalRead(reverse) == LOW) {
    button = 400;
    itoa(button, temparray, 10);

    vw_send((uint8_t *)temparray, strlen(temparray));  
    vw_wait_tx();                                              
  }

  if (digitalRead(stand) == LOW) {
    button = 600;
    itoa(button, temparray, 10);

    vw_send((uint8_t *)temparray, strlen(temparray));  
    vw_wait_tx();                                              
  }

  if (digitalRead(sit) == LOW) {
    button = 800;
    itoa(button, temparray, 10);

    vw_send((uint8_t *)temparray, strlen(temparray));  
    vw_wait_tx();                                              
  }


  
}
