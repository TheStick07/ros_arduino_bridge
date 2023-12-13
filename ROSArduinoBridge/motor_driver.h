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

#ifdef CYTRON
  #define TOOL_MOTOR 3
  #define RIGHT_MOTOR 5
  #define LEFT_MOTOR 6
  #define TOOL_MOTOR_DIR 2
  #define RIGHT_MOTOR_DIR 4
  #define LEFT_MOTOR_DIR 7
#endif

void initMotorController();
void setMotorSpeed(int i, int spd);
void setMotorSpeeds(int leftSpeed, int rightSpeed);
