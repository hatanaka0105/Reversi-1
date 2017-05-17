#include <Windows.h>
#include <iostream>
#include "Stone.h"

#define COLOR_WHITE 7
#define COLOR_BLACK 0

using namespace std;

void Stone::Initialize(int colorNumber)
{
	hStdout = GetStdHandle(STD_OUTPUT_HANDLE);
	//hStdoutのコンソールスクリーンバッファ情報をcsbiに取得
	GetConsoleScreenBufferInfo(hStdout, &csbi);

	switch (colorNumber)
	{
		case 0:
			myColor = Green;
			break;
		case 1:
			myColor = White;
			break;
		case 2:
			myColor = Black;
			break;
		default:
			myColor = Green;
			break;
	}
}

void Stone::Update()
{

}

void Stone::Draw()
{
	cout << myColor;
}