#ifndef ___Class_Board
#define ___Class_Board

#include <Windows.h>
#include "Stone.h"
#include "Guide.h"

#define HORIZONTAL 8
#define VERTICAL 8

class Board
{
private:
	HANDLE hStdout;
	WORD wAttributes;
	CONSOLE_SCREEN_BUFFER_INFO csbi;//ç\ë¢ëÃÇ≈Ç∑

	void SetBoardColor();

public:
	void Initialize();
	void Update();
	void Draw(Stone stone[VERTICAL][HORIZONTAL], Guide guide);
};
#endif