#ifndef ___Class_Guide
#define ___Class_Guide

#include <Windows.h>

class Guide
{
private:
	HANDLE hStdout;
	WORD wAttributes;
	CONSOLE_SCREEN_BUFFER_INFO csbi;//�\���̂ł�
public:
	void Initialize();
	void DrawHorizontal();
	void DrawVertical(int numberOfVertical);
};

#endif
