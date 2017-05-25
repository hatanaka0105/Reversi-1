#include <iostream>
#include <Windows.h>
#include "Board.h"

#define COLOR_WHITE 7

using namespace std;


void Board::Initialize()
{
	hStdout = GetStdHandle(STD_OUTPUT_HANDLE);
	//hStdout�̃R���\�[���X�N���[���o�b�t�@����csbi�Ɏ擾
	GetConsoleScreenBufferInfo(hStdout, &csbi);
}

void Board::Update()
{

}

void Board::Draw(Stone stone[VERTICAL][HORIZONTAL])
{
	//�F�ݒ�
	SetBoardColor();

	cout << "   ";
	cout << "��";
	for (int i = 0; i < HORIZONTAL - 1; i++)
	{
		cout << "����";
	}
	cout << "����" << endl;

	for (int j = 0; j < VERTICAL - 1; j++)
	{
		cout << " A ";
		//�����̊Ԃɐ΂�����
		for (int i = 0; i < HORIZONTAL; i++)
		{
			cout << "��";
			stone[j][i].Draw();
			SetBoardColor();
		}
		cout << "��" << endl;

		cout << "   ��";
		for (int i = 0; i < HORIZONTAL - 1; i++)
		{
			cout << "����";
		}
		cout << "����" << endl;
	}

	cout << " A ";
	//�����̊Ԃɐ΂�����
	for (int i = 0; i < HORIZONTAL; i++)
	{
		cout << "��";
		stone[VERTICAL - 1][i].Draw();
		SetBoardColor();
	}
	cout << "��" << endl;

	cout << "   ";
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