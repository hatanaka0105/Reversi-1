#include <Windows.h>
#include <iostream>
#include "Board.h"

#define COLOR_WHITE 7

using namespace std;

void Board :: Initialize()
{
	hStdout = GetStdHandle(STD_OUTPUT_HANDLE);
	//hStdoutのコンソールスクリーンバッファ情報をcsbiに取得
	GetConsoleScreenBufferInfo(hStdout, &csbi);
}

void Board :: Update()
{

}

void Board :: Draw()
{
	wAttributes = COLOR_WHITE | FOREGROUND_INTENSITY | BACKGROUND_GREEN;
	SetConsoleTextAttribute(hStdout, wAttributes);

	cout << "┏";
	for (int i = 0; i < HORIZONTAL - 1; i++)
	{
		cout << "━┳";
	}
	cout << "━┓" << endl;

	for (int j = 0; j < VERTICAL - 1; j++)
	{
		//ここの間に石が入る
		for (int i = 0; i < HORIZONTAL; i++)
		{
			cout << "┃　";
		}
		cout << "┃" << endl;

		cout << "┣";
		for (int i = 0; i < HORIZONTAL - 1; i++)
		{
			cout << "━╋";
		}
		cout << "━┫" << endl;
	}

	//ここの間に石が入る
	for (int i = 0; i < HORIZONTAL; i++)
	{
		cout << "┃　";
	}
	cout << "┃" << endl;

	cout << "┗";
	for (int i = 0; i < HORIZONTAL - 1; i++)
	{
		cout << "━┻";
	}
	cout << "━┛" << endl;

	SetConsoleTextAttribute(hStdout, csbi.wAttributes);
}