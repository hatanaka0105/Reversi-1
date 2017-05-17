#include <Windows.h>
#include <iostream>
#include "Reversi.h"

#define COLOR_WHITE 7
#define COLOR_BLACK 0

using namespace std;

void Reversi :: Run()
{
	cout << "Run����`" << endl;

	Reversi::Initialize();

	while (1)
	{
		Reversi::Update();
		Reversi::Draw();
		break;
	}

	cout << "Run(2���)����`" << endl;
}

void Reversi::Initialize()
{
	cout << "Initialize����`" << endl;
}

void Reversi::Update()
{
	cout << "Update����`" << endl;
}

void Reversi::Draw()
{
	cout << "Draw����`" << endl;

	HANDLE hStdout;
	WORD wAttributes;
	CONSOLE_SCREEN_BUFFER_INFO csbi;//�\���̂ł�

	hStdout = GetStdHandle(STD_OUTPUT_HANDLE);
	//hStdout�̃R���\�[���X�N���[���o�b�t�@����csbi�Ɏ擾
	GetConsoleScreenBufferInfo(hStdout, &csbi);

	wAttributes = FOREGROUND_GREEN;
	SetConsoleTextAttribute(hStdout, wAttributes);
	cout << "�΂ł�" << endl;
	wAttributes = FOREGROUND_RED;
	SetConsoleTextAttribute(hStdout, wAttributes);
	cout << "�Ԃł�" << endl;
	wAttributes = FOREGROUND_BLUE;
	SetConsoleTextAttribute(hStdout, wAttributes);
	cout << "�ł�" << endl;
	wAttributes = FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE;
	SetConsoleTextAttribute(hStdout, wAttributes);
	cout << "���ł�" << endl;
	wAttributes = wAttributes | FOREGROUND_INTENSITY;
	SetConsoleTextAttribute(hStdout, wAttributes);
	cout << "�����\���ł�" << endl;

	cout << endl;

	cout << "   "; cout << "�@�P�@�Q�@�R�@�S�@�T�@�U�@�V�@�W" << endl;
	wAttributes = wAttributes | BACKGROUND_GREEN;
	SetConsoleTextAttribute(hStdout, wAttributes);
	cout << "   "; cout << "����������������������������������" << endl;
	cout << " 1 "; cout << "���@���@���@���@���@���@���@���@��" << endl;
	cout << "   "; cout << "����������������������������������" << endl;
	cout << " 2 "; cout << "���@���@���@���@���@���@���@���@��" << endl;
	cout << "   "; cout << "����������������������������������" << endl;
	cout << " 3 "; cout << "���@���@���@���@���@���@���@���@��" << endl;
	cout << "   "; cout << "����������������������������������" << endl;

	cout << " 4 "; cout << "���@���@���@������";
	wAttributes = COLOR_BLACK | BACKGROUND_GREEN;
	SetConsoleTextAttribute(hStdout, wAttributes);
	cout << "��";
	wAttributes = COLOR_WHITE | BACKGROUND_GREEN | FOREGROUND_INTENSITY;
	SetConsoleTextAttribute(hStdout, wAttributes);
	cout << "���@���@���@��" << endl;
	cout << "   "; cout << "����������������������������������" << endl;
	cout << " 5 "; cout << "���@���@���@��";
	wAttributes = COLOR_BLACK | BACKGROUND_GREEN;
	SetConsoleTextAttribute(hStdout, wAttributes);
	cout << "��";
	wAttributes = COLOR_WHITE | BACKGROUND_GREEN | FOREGROUND_INTENSITY;
	SetConsoleTextAttribute(hStdout, wAttributes);
	cout << "�������@���@���@��" << endl;

	cout << "   "; cout << "����������������������������������" << endl;
	cout << " 6 "; cout << "���@���@���@���@���@���@���@���@��" << endl;
	cout << "   "; cout << "����������������������������������" << endl;
	cout << " 7 "; cout << "���@���@���@���@���@���@���@���@��" << endl;
	cout << "   "; cout << "����������������������������������" << endl;
	cout << " 8 "; cout << "���@���@���@���@���@���@���@���@��" << endl;
	cout << "   "; cout << "����������������������������������" << endl;
	cout << endl;

	//cout << "��	��	��	��	��	��	��	��	��	��	��	��	��	��	��	���� �� �� �� ��" << endl;
	SetConsoleTextAttribute(hStdout, csbi.wAttributes);
	cout << "|     " << endl;
	cout << "��	��	��	��	��	��	��	��	��	��	��" << endl;
	//wAttributes = wAttributes | BACKGROUND_GREEN;
	//SetConsoleTextAttribute(hStdout, wAttributes);
	cout << "��" << endl;
	wAttributes = COLOR_BLACK | BACKGROUND_GREEN;
	SetConsoleTextAttribute(hStdout, wAttributes);
	cout << "��" << endl;
	//wAttributes = COLOR_WHITE | BACKGROUND_GREEN | FOREGROUND_INTENSITY;
	//SetConsoleTextAttribute(hStdout, wAttributes);
	cout << "�@�o�b�N��΂̋����ɂ��܂��� wAttributes = " << wAttributes << endl;
	//���̃e�L�X�g��Ԃɖ߂�
	SetConsoleTextAttribute(hStdout, csbi.wAttributes);

}
