void setup(){

}

void loop(){
  int nextState = disabled();
  while (nextState != 0) {
    switch (nextState)
    {
    case 1:
      nextState = idle();
      break;
    case 2: 
      nextState = error();
      break;
    case 3: 
      nextState = running();
      break;
    default:
      break;
    }
  }


}

//pseudocode of main functions we will need
int monitorTemp();
int monitorWaterLevel();
int monitorHumidity();

//different system states
int disabled(){
  //yellow LED on
  //use IRS to monitor start button
  while (/*not button pressed*/);
  return 1;
}  
  
int idle(){
  //call monitorTemp()
    //transition to 'running' state when temp > thresh
}

void error();
void running();
