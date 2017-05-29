#include <iostream>
#include <Windows.h>
#include "Board.h"

#define COLOR_WHITE 7

using namespace std;

void Board::Update()
{

}

void Board::Draw(Stone stone[VERTICAL][HORIZONTAL], Guide guide)
{
	cout << "   ";

	//�F�ݒ�
	SetBoardColor();

	cout << "��";
	for (int i = 0; i < HORIZONTAL - 1; i++)
	{
		cout << "����";
	}
	cout << "����" << endl;

	for (int j = 0; j < VERTICAL - 1; j++)
	{
		SetConsoleTextAttribute(hStdout, csbi.wAttributes);
		guide.DrawVertical(j);
		SetConsoleTextAttribute(hStdout, wAttributes);
		for (int i = 0; i < HORIZONTAL; i++)
		{
			cout << "��";
			stone[j][i].Draw();
			SetBoardColor();
		}
		cout << "��" << endl;

		SetConsoleTextAttribute(hStdout, csbi.wAttributes);
		cout << "   ";
		SetConsoleTextAttribute(hStdout, wAttributes);
		cout << "��";
		for (int i = 0; i < HORIZONTAL - 1; i++)
		{
			cout << "����";
		}
		cout << "����" << endl;
	}

	//�Ō�̍s------------------------------
	SetConsoleTextAttribute(hStdout, csbi.wAttributes);
	guide.DrawVertical(VERTICAL - 1);
	SetConsoleTextAttribute(hStdout, wAttributes);

	for (int i = 0; i < HORIZONTAL; i++)
	{
		cout << "��";
		stone[VERTICAL - 1][i].Draw();
		SetBoardColor();
	}
	cout << "��" << endl;

	SetConsoleTextAttribute(hStdout, csbi.wAttributes);
	cout << "   ";
	SetConsoleTextAttribute(hStdout, wAttributes);
	cout << "��";
	for (int i = 0; i < HORIZONTAL - 1; i++)
	{
		cout << "����";
	}
	cout << "����" << endl;

	//���̃e�L�X�g��Ԃɖ߂�
	SetConsoleTextAttribute(hStdout, csbi.wAttributes);
}

void Board::SetBoardColor()
{
	wAttributes = COLOR_WHITE | FOREGROUND_INTENSITY | BACKGROUND_GREEN;
	SetConsoleTextAttribute(hStdout, wAttributes);
}