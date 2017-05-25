#include <iostream>
#include <Windows.h>
#include "Stone.h"

#define COLOR_BLACK 0
#define COLOR_WHITE 7

using namespace std;

void Stone::Initialize(int colorNumber)
{
	hStdout = GetStdHandle(STD_OUTPUT_HANDLE);
	//hStdout�̃R���\�[���X�N���[���o�b�t�@����csbi�Ɏ擾
	GetConsoleScreenBufferInfo(hStdout, &csbi);

	switch (colorNumber)
	{
	case 0:
		myColor = Green;
		break;
	case 1:
		myColor = Black;
		break;
	case 2:
		myColor = White;
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
	switch (myColor)
	{
	case Green:
		wAttributes = FOREGROUND_GREEN | BACKGROUND_GREEN;
		break;

	case Black:
		wAttributes = COLOR_BLACK | BACKGROUND_GREEN;
		break;

	case White:
		wAttributes = COLOR_WHITE | FOREGROUND_INTENSITY | BACKGROUND_GREEN;
		break;

	default:
		wAttributes = FOREGROUND_GREEN | BACKGROUND_GREEN;
		break;
	}
	SetConsoleTextAttribute(hStdout, wAttributes);

	cout << "��";

	//���̃e�L�X�g��Ԃɖ߂�
	SetConsoleTextAttribute(hStdout, csbi.wAttributes);
}