#ifndef ___Class_Stone
#define ___Class_Stone

#include <Windows.h>

enum Color
{
	Green,//î’ÇÃêF(ãÛÇ∆ÇµÇƒàµÇ§)
	Black,
	White
};

class Stone
{
private:
	HANDLE hStdout;
	WORD wAttributes;
	CONSOLE_SCREEN_BUFFER_INFO csbi;//ç\ë¢ëÃÇ≈Ç∑

public:
	Color myColor;

	void Initialize(int colorNumber);
	void Update();
	void Draw();
};

#endif