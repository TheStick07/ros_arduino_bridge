/***************************************************************
   Motor driver function definitions - by James Nugen
   *************************************************************/

#ifdef L298_MOTOR_DRIVER
  #define RIGHT_MOTOR_BACKWARD 5
  #define LEFT_MOTOR_BACKWARD  6
  #define RIGHT_MOTOR_FORWARD  9
  #define LEFT_MOTOR_FORWARD   10
  #define RIGHT_MOTOR_ENABLE 12
  #define LEFT_MOTOR_ENABLE 13
#endif

#ifdef CYTRON_MOTOR_DRIVER
  //below must be PWM-Pins (ARduino NANO: Pins-3,5,6,9,10,11)
  #define TOOL_MOTOR 3
  #define RIGHT_MOTOR 5
  #define LEFT_MOTOR 6
  //below doesn't matter what Pins are used
  #define TOOL_MOTOR_DIR 10
  #define RIGHT_MOTOR_DIR 11
  #define LEFT_MOTOR_DIR 9
#endif

void initMotorController();
void setMotorSpeed(int i, int spd);
void setMotorSpeeds(int leftSpeed, int rightSpeed);
