#include <iostream>
#include <Windows.h>
#include "Board.h"

#define COLOR_WHITE 7

using namespace std;


void Board::Initialize()
{
	hStdout = GetStdHandle(STD_OUTPUT_HANDLE);
	//hStdoutのコンソールスクリーンバッファ情報をcsbiに取得
	GetConsoleScreenBufferInfo(hStdout, &csbi);
}

void Board::Update()
{

}

void Board::Draw(Stone stone[VERTICAL][HORIZONTAL])
{
	//色設定
	SetBoardColor();

	cout << "   ";
	cout << "┏";
	for (int i = 0; i < HORIZONTAL - 1; i++)
	{
		cout << "━┳";
	}
	cout << "━┓" << endl;

	for (int j = 0; j < VERTICAL - 1; j++)
	{
		cout << " A ";
		//ここの間に石が入る
		for (int i = 0; i < HORIZONTAL; i++)
		{
			cout << "┃";
			stone[j][i].Draw();
			SetBoardColor();
		}
		cout << "┃" << endl;

		cout << "   ┣";
		for (int i = 0; i < HORIZONTAL - 1; i++)
		{
			cout << "━╋";
		}
		cout << "━┫" << endl;
	}

	cout << " A ";
	//ここの間に石が入る
	for (int i = 0; i < HORIZONTAL; i++)
	{
		cout << "┃";
		stone[VERTICAL - 1][i].Draw();
		SetBoardColor();
	}
	cout << "┃" << endl;

	cout << "   ";
	cout << "┗";
	for (int i = 0; i < HORIZONTAL - 1; i++)
	{
		cout << "━┻";
	}
	cout << "━┛" << endl;

	//元のテキスト状態に戻す
	SetConsoleTextAttribute(hStdout, csbi.wAttributes);
}

void Board::SetBoardColor()
{
	wAttributes = COLOR_WHITE | FOREGROUND_INTENSITY | BACKGROUND_GREEN;
	SetConsoleTextAttribute(hStdout, wAttributes);
}