#include <iostream>
#include <cstdlib>
#include <ctime>
#include <Windows.h>

using std::cin;
using std::cout;
using std::endl;

#include "console_config.hpp"
#include "game.hpp"

void gotoxy(int, int);
void appearance(void);
void border(int, int, int, int);
void fundamentalInterfaceComponents(void);
bool handle_operation(char, int &, float &, float &);
float row_sistem(int, float);