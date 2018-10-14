#include <Stepper.h>

const int stepsPerRevolution = 200;  // change this to fit the number of steps per revolution
// for your motor

// initialize the stepper library on pins 8 through 11:
Stepper myStepper(stepsPerRevolution, D5, D6, D7, D8);
myStepper.setSpeed(60);

void forwards() {
  myStepper.step(stepsPerRevolution);
}

void backwards() {
  myStepper.step(-stepsPerRevolution);
}
