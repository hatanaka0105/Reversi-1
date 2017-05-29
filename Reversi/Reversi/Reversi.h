#ifndef ___Class_Reversi
#define ___Class_Reversi

#include "DrawObject.h"
#include "Board.h"
#include "Stone.h"
#include "Guide.h"

class Reversi
{
public:
	void Run();

private:
	Guide guide;
	Board board;
	Stone stone[VERTICAL][HORIZONTAL];

	void Initialize();
	void Update();
	void Draw();
};
#endif
