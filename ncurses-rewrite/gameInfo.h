#ifndef GAMEINFO_H
#define GAMEINFO_H

typedef struct{
  int end, nextEvent, errorCode;
  int interestPoints[3];
  int hearts[3];
  int day;
} gameInfo;

#endif