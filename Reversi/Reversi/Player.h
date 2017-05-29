#ifndef ___Class_Player
#define ___Class_Player

#include <iostream>
#include <string>

using namespace std;

class Player
{
private:
	string inputString;

	void Input();
	void ConvertInput();

public:
	void Update();
};

#endif
