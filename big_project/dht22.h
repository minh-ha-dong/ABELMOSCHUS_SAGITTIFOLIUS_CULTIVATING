//Arduino IDE runs in C++ so this need to be defined for it to calls C
#ifdef __cplusplus 
 extern "C" {
#endif
//Start coding here
enum State {
  LOWER,
  ACCEPT,
  HIGHER
};

float checkTemp() {};
State compareTemp(float x);

//Init Sensor -> void

//Read Sensor Value -> int


#ifdef __cplusplus
}
#endif
