#ifndef ___Class_Reversi
#define ___Class_Reversi

#include "DrawObject.h"
#include "Board.h"
#include "Stone.h"
#include "Guide.h"
#include "Player.h"

class Reversi
{
public:
	void Run();

private:
	DrawObject* drawObject;
	Guide guide;
	Board board;
	Stone stone[VERTICAL][HORIZONTAL];
	Player player;

	void Initialize();
	void Update();
	void Draw();
};
#endif
