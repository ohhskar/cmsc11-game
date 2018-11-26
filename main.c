#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "gameInfo.h"
#include "gameEvents.h"
#include "eventSwitcher.h"
#include "hud.h"

//Computes for the number of hearts based on the current interestPoints
struct gameInfo computeHearts(struct gameInfo _mainInfo){
  _mainInfo.heartsA = floor(_mainInfo.iPA/100);
  _mainInfo.heartsB = floor(_mainInfo.iPB/100);
  _mainInfo.heartsC = floor(_mainInfo.iPC/100);

  return _mainInfo;
}

//takes care of the data between the main function and the events
struct gameInfo eventEngine(struct gameInfo _mainInfo){
  //Initialize event variables
  struct gameInfo eventInfo;
  eventInfo = _mainInfo;
  eventInfo.end = 0;
  eventInfo.errorCode = 0;
  eventInfo.nextEvent = _mainInfo.nextEvent;

  //Main Event loop
  while (eventInfo.end == 0 && eventInfo.errorCode == 0){

    //recomputes the hearts for the HUD
    _mainInfo = computeHearts(_mainInfo);
    printHUD(_mainInfo);

    //switches to events based on the next room
    eventInfo = eventSwitcher(eventInfo);

    //finalizes changes in iPs from events
    _mainInfo.iPA = eventInfo.iPA;
    _mainInfo.iPB = eventInfo.iPB;
    _mainInfo.iPC = eventInfo.iPC;
  }

  //End the game if next event == 999
  if(eventInfo.nextEvent == 100000){
    _mainInfo.end = 1;
  } else {
    _mainInfo.end = 0;
  }

  // After finishing the event, sets the mainInfo nextEvent from eventInfo;
  _mainInfo.nextEvent = eventInfo.nextEvent;
  //Error Codes
  if (eventInfo.errorCode){
    _mainInfo.errorCode = eventInfo.errorCode;
  } else {
    _mainInfo.errorCode = 0;
  }

  return _mainInfo;
}

int main(){
  //Initialize Variables
  struct gameInfo mainInfo;
  mainInfo.end = 0;
  mainInfo.errorCode = 0;
  mainInfo.nextEvent = 0;
  mainInfo.iPA = 0;
  mainInfo.iPB = 0;
  mainInfo.iPC = 0;
  mainInfo = computeHearts(mainInfo);

  //Present Splash Screen
  splashScreen();

  //Main Game Logic
  while(mainInfo.end == 0 && mainInfo.errorCode == 0){
    mainInfo = eventEngine(mainInfo);
  }
  
  //Error Checking
  if (mainInfo.errorCode != 0){
    printf("Error %i occured.", mainInfo.errorCode);
  }

  return 0;
}