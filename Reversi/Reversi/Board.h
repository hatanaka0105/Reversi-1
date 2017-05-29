#ifndef ___Class_Board
#define ___Class_Board

#include "DrawObject.h"
#include "Stone.h"
#include "Guide.h"
#include "ConstantMacro.h"

class Board : public DrawObject
{
public:
	void SetBoardColor();
	void Update();
	void Draw(Stone stone[VERTICAL][HORIZONTAL], Guide guide);
};
#endif