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
  //turn green LED to On
  
  //call monitorTemp()
    //transition to 'running' state when temp > thresh
  while( (monitorTemp() <= thresh) && (monitorWaterLevel() > minWaterLvl));

  //turn green LED to Off
  
  if( monitorTemp() > thresh){
   return  //return int value corresponding to 'running'
  }else if( monitorWaterLevel() < minWaterLvl){
   return //return int value corresponding to 'error' 
  }
}

int error(){
 //turn red LED on  
 //display error message on LCD
  
 while( /*check for reset button to be pressed*/ );
  
 //turn red LED off
  
 if( monitorWaterLevel() > minWaterLvl ){
  //stop displaying error message
  return //return to IDLE
 }else{
  return //return back to ERROR 
 }
}


int running();
