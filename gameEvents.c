#include <stdio.h>
#include <string.h>
#include "gameInfo.h"
#include "hud.h"

struct gameInfo mainMenu(struct gameInfo _eventInfo){
  printf("\nMain Menu\n");

  //Setting Options
  char options[2][50];
  int numberOptions = 2;
  strcpy(options[0], "Start Game");
  strcpy(options[1], "Exit Game");

  //Prints the options
  printMenu(options, numberOptions);
  
  //Scans for the choice
  int optionLoopEnd = 0;
  int option = 0;
  while (optionLoopEnd == 0){

    printf("\nPlease enter your choice:\n> ");
    scanf("%i", &option);

    if (option == 1){
      _eventInfo.nextEvent = 10; // startGame
      _eventInfo.end = 1;
      optionLoopEnd = 1;
    }
    else if (option == 2){
      _eventInfo.nextEvent = 100000; // exitGame
      _eventInfo.end = 1;
      optionLoopEnd = 1;
    }
    else {
      option = 0;
      printError();
      printHUD(_eventInfo);
      printMenu(options, numberOptions);
    }
  }

  return _eventInfo;
}

struct gameInfo talkMenu(struct gameInfo _eventInfo){
  printf("\nWho do you want to talk to?\n");
  //Setting Options
  char options[3][50];
  int numberOptions = 3;
  strcpy(options[0], "A");
  strcpy(options[1], "B");
  strcpy(options[2], "C");

  //Prints the options
  printMenu(options, numberOptions);

  //Scans for the choiceu
  int optionLoopEnd = 0;
  int option = 0;
  while (optionLoopEnd == 0){

    printf("\nPlease enter your choice:\n> ");
    scanf("%i", &option);

    if (option == 1){
      _eventInfo.nextEvent = 11; // talkWithA
      _eventInfo.end = 1;
      optionLoopEnd = 1;
    }
    else if (option == 2){
      _eventInfo.nextEvent = 12; // talkWithB
      _eventInfo.end = 1;
      optionLoopEnd = 1;
    }
    else if (option == 2){
      _eventInfo.nextEvent = 13; // talkWithC
      _eventInfo.end = 1;
      optionLoopEnd = 1;
    }
    else {
      option = 0;
      printError();
      printHUD(_eventInfo);
      printMenu(options, numberOptions);
    }
  }

  return _eventInfo;
}

#Sample of an options screen related to the story
#idk how to handle this yet lol 
struct gameInfo dayFirst(struct gameInfo _eventInfo){
  printf("\nIt's your first day at a new school!\n");
  printf("\nAll your classmates are staring at you expectantly.\n");
  printf("\nWhat do you want to do?\n");

  //Setting Options
  char options[3][50];
  int numberOptions = 3;
  strcpy(options[0], "Introduce yourself normally");
  strcpy(options[1], "Introduce yourself by cracking jokes");
  strcpy(options[2], "Don't introduce yourself, just sit in the corner, and brood");
  //Prints the options
  printMenu(options, numberOptions);
  
  //Scans for the choice
  int optionLoopEnd = 0;
  int option = 0;
  while (optionLoopEnd == 0){

    printf("\nPlease enter your choice:\n> ");
    scanf("%i", &option);

    if (option == 1){
      _eventInfo.nextEvent = 21; // 
      _eventInfo.end = 1;
      _eventInfo.iPA += 5
      _eventInfo.ipB += 5
      _eventInfo.ipC += 5
      optionLoopEnd = 1;
    }
    else if (option == 2){
      _eventInfo.nextEvent = 21; // questMenu
      _eventInfo.end = 1;
      _eve
      optionLoopEnd = 1;
    }
    else if (option == 3){
      _eventInfo.nextEvent = 21; // exitGame
      _eventInfo.end = 1;
      optionLoopEnd = 1;
    }
    else {
      option = 0;
      printError();
      printHUD(_eventInfo);
      printMenu(options, numberOptions);
    }
  }

  return _eventInfo;
}
/* nextEvent code guides 
* 0 = Main Menu
* 10 = startGame
* 11 = Talk with A
* 12 = Talk with B
* 13 = Talk with C
* 20 = Quest Menu
* 21 = 
* 100000 = Exit Game
*/