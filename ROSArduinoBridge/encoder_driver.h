/* *************************************************************
   Encoder driver function definitions - by James Nugen
   ************************************************************ */
   
   
#ifdef ARDUINO_ENC_COUNTER
  //below can be changed, but should be PORTD pins; 
  //otherwise additional changes in the code are required
  #define LEFT_ENC_PIN_A PD2  //pin 2
  #define LEFT_ENC_PIN_B PD4  //pin 3
  
  //below can be changed, but should be PORTC pins
  #define RIGHT_ENC_PIN_A PC4  //pin A4
  #define RIGHT_ENC_PIN_B PC5  //pin A5

  //below can be changed, but should be PORTB pins
  #define TOOL_ENC_PIN_A PB11  //pin 11
  #define TOOL_ENC_PIN_B PB12  //pin 12
#endif
   
long readEncoder(int i);
void resetEncoder(int i);
void resetEncoders();

