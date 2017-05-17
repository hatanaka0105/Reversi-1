#ifndef ___Class_Reversi
#define ___Class_Reversi

#include "Board.h"
#include "Stone.h"

class Reversi
{
	public:
		void Run();

	private:
		Board board;
		Stone stone[HORIZONTAL][VERTICAL];

		void Initialize();
		void Update();
		void Draw();
};
#endif
