void setup(){

}

void loop(){
  
}

//pseudocode of main functions we will need
int monitorTemp();
int monitorWaterLevel();
int monitorHumidity();

//different system states
void disabled(){
  //yellow LED on
  //use IRS to monitor start button

}  
  
void idle(){
  //call monitorTemp()
    //transition to 'running' state when temp > thresh
}

void error();
void running();
