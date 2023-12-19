/* *************************************************************
   Encoder driver function definitions - by James Nugen
   ************************************************************ */
   
   
#ifdef ARDUINO_ENC_COUNTER
  //below can be changed, but should be PORTD pins; 
  //otherwise additional changes in the code are required
  #define LEFT_ENC_PIN_A 2  //pin 2 - motor 1 a 
  #define LEFT_ENC_PIN_B 7  //pin 7 - motor 1 b 
  
  //below can be changed, but should be PORTC pins
  #define RIGHT_ENC_PIN_A 17  //pin A2 - motor 2 a
  #define RIGHT_ENC_PIN_B 16  //pin A3 - motor 2 b

  //below can be changed, but should be PORTB pins
  #define TOOL_ENC_PIN_A PB11  //pin 11
  #define TOOL_ENC_PIN_B PB12  //pin 12
#endif
   
long readEncoder(int i);
void resetEncoder(int i);
void resetEncoders();
