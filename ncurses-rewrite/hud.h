#ifndef HUD_C
#define HUD_C

void initializeNcurses();
void initializeColors();
void splashScreen();
void presentsScreen();
void createGameScreen(const char **line, int lines, const char **option, int options, gameInfo incomingInfo);

#endif