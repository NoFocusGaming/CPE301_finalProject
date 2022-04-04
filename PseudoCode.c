void setup(){

}

//nextState val:
//0 for DISABLED state
//1 for IDLE state
//2 for ERROR state
//3 for RUNNING state

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

void ventChanges(){
 // read vent potentiometer level
 // adjust motor accordingly
}

//different system states
int disabled(){
  //yellow LED on
  //use IRS to monitor start button
  while (/*not button pressed*/){
   ventChanges(); 
  }
  return 1;
}  
  
int idle(){
  //turn green LED on
  
  //call monitorTemp()
    //transition to 'running' state when temp > thresh
  while( (monitorTemp() <= thresh) && (monitorWaterLevel() > minWaterLvl));

  //turn green LED to Off
  
  if( monitorTemp() > thresh){
   return  3; //return int value corresponding to 'running'
  }else if( monitorWaterLevel() < minWaterLvl){
   return 2; //return int value corresponding to 'error' 
  }else{
   return 1; //return back to 'idle' state
  }
}

int error(){
 //turn red LED on  
 //display error message on LCD
  
 while( /*check for reset button to be pressed*/ ){
  ventChanges(); 
 }
  
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
  
 while( (monitorTemp() > thresh) && (monitorWaterLevel() > minWaterLvl)){
  ventChanges(); 
 }  
  
 //turn blue LED off
 //turn fan motor off
  
 if( monitorTemp() <= thresh){
   return  1; //return int value corresponding to 'idle' state
  }else if( monitorWaterLevel() < minWaterLvl){
   return 2; //return int value corresponding to 'error' 
  }else{
    return 3; //stay in 'running' state 
  }
  
}
