#include <iostream>
#include <string>
#include <Windows.h>
#include "Guide.h"

using namespace std;

void Guide::DrawHorizontal()
{
	string a = "‚P";
	cout << "   "; cout << "@‚P@‚Q@‚R@‚S@‚T@‚U@‚V@‚W" << endl;
	cout << "‚P" + ('‚Q' - '‚P') << endl;
}

void Guide::DrawVertical()
{
	//switch(vertical)
	cout << "a" + ("c" - "a") << endl;
}