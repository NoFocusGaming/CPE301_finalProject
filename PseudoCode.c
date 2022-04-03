void setup(){

}

void loop(){
  
}

//pseudocode of main functions we will need
int monitorTemp();
int monitorWaterLevel();
int monitorHumidity();

//different system states
int disabled(){
  //yellow LED on
  //use IRS to monitor start button

}  
  
int idle(){
  //call monitorTemp()
    //transition to 'running' state when temp > thresh
  while( (monitorTemp() <= thresh) && (monitorWaterLevel() > minWaterLvl));

  if( monitorTemp() > thresh){
   return  //return int value corresponding to 'running'
  }else if( monitorWaterLevel() < minWaterLvl){
   return //return int value corresponding to 'error' 
  }
}

int error();
int running();
