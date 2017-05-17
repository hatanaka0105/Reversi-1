#ifndef ___Class_Board
#define ___Class_Board

#include <Windows.h>

#define HORIZONTAL 8
#define VERTICAL 8

class Board
{
private:
	HANDLE hStdout;
	WORD wAttributes;
	CONSOLE_SCREEN_BUFFER_INFO csbi;//ç\ë¢ëÃÇ≈Ç∑

public:
	void Initialize();
	void Update();
	void Draw();
};
#endif