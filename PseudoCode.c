void setup(){

}

//nextState val:
//0 for DISABLED state
//1 for IDLE state
//2 for ERROR state
//3 for RUNNING state

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
  //turn green LED to On
  
  //call monitorTemp()
    //transition to 'running' state when temp > thresh
  while( (monitorTemp() <= thresh) && (monitorWaterLevel() > minWaterLvl));

  //turn green LED to Off
  
  if( monitorTemp() > thresh){
   return  3; //return int value corresponding to 'running'
  }else if( monitorWaterLevel() < minWaterLvl){
   return 2; //return int value corresponding to 'error' 
  }
}

int error(){
 //turn red LED on  
 //display error message on LCD
  
 while( /*check for reset button to be pressed*/ );
  
 //turn red LED off
  
 if( monitorWaterLevel() > minWaterLvl ){
  //stop displaying error message
  return 1; //return to IDLE
 }else{
  return 2; //return back to ERROR 
 }
}

int running(){
 //turn blue LED on 
 //turn fan motor on
  
}
