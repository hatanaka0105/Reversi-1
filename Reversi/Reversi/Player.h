#ifndef ___Class_Player
#define ___Class_Player

#include <iostream>
#include <string>
#include "Stone.h"
#include "ConstantMacro.h"

using namespace std;

class Player
{
private:
	string inputString;

	void Input(Stone stone[VERTICAL][HORIZONTAL]);
	void ConvertInput();

public:
	void Update(Stone stone[VERTICAL][HORIZONTAL]);
};

#endif
