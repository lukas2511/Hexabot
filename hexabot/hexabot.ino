#include <Servo.h>

Servo servol;
Servo servor;
Servo servom;

int pause=100;

void setup(){
  servol.attach(9);
  servom.attach(10);
  servor.attach(11);
}

void l_vor(){
  servol.write(90);
  delay(pause);  
}

void l_rueck(){
  servol.write(125);
  delay(pause);
}

void l(){
  servom.write(90);  
  delay(pause);  
}

void r_vor(){
  servor.write(150);
  delay(pause);  
}

void r_rueck(){
  servor.write(120);
  delay(pause);
}

void r(){
  servom.write(65);  
  delay(pause);  
}

void loop(){
 r();
 l_vor();
 l();
 l_rueck();
 r_vor();
 r();
 r_rueck();
}
