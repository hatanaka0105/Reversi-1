#ifndef ___Class_DrawObject
#define ___Class_DrawObject

#include <Windows.h>

class DrawObject
{
protected:
	HANDLE hStdout;
	WORD wAttributes;
	CONSOLE_SCREEN_BUFFER_INFO csbi;//�\���̂ł�

public :
	void virtual Initialize();
	void virtual Draw();
};
#endif
