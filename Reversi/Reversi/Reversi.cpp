#include <iostream>
#include <Windows.h>
#include "Reversi.h"

#define COLOR_BLACK 0
#define COLOR_WHITE 7

using namespace std;

void Reversi::Run()
{
	cout << "Run����`" << endl;

	Reversi::Initialize();

	while (1)
	{
		Reversi::Update();
		Reversi::Draw();

		//TODO�F������ǉ�����
		break;
	}

	cout << "Run(2���)����`" << endl;
}

void Reversi::Initialize()
{
	cout << "Initialize����`" << endl;
	board.Initialize();

	const int green = 0;
	const int black = 1;
	const int white = 2;

	for (int i = 0; i < VERTICAL; i++)
	{
		for (int j = 0; j < HORIZONTAL; j++)
		{
			//�����̍���
			if ((j + 1) * 2 == HORIZONTAL && (i + 1) * 2 == VERTICAL)
			{
				stone[i][j].Initialize(black);
				continue;
			}
			//�����̉E��
			if (j * 2 == HORIZONTAL && (i + 1) * 2 == VERTICAL)
			{
				stone[i][j].Initialize(white);
				continue;
			}
			//�����̍���
			if ((j + 1) * 2 == HORIZONTAL && i * 2 == VERTICAL)
			{
				stone[i][j].Initialize(white);
				continue;
			}
			//�����̉E��
			if (j * 2 == HORIZONTAL && i * 2 == VERTICAL)
			{
				stone[i][j].Initialize(black);
				continue;
			}

			stone[i][j].Initialize(green);
		}
	}
}

void Reversi::Update()
{
	cout << "Update����`" << endl;
}

void Reversi::Draw()
{
	//�`��X�V
	system("cls");

	cout << "Draw����`" << endl;
	guide.DrawHorizontal();
	board.Draw(stone);

	guide.DrawVertical();

	HANDLE hStdout;
	WORD wAttributes;
	CONSOLE_SCREEN_BUFFER_INFO csbi;//�\���̂ł�

	hStdout = GetStdHandle(STD_OUTPUT_HANDLE);
	//hStdout�̃R���\�[���X�N���[���o�b�t�@����csbi�Ɏ擾
	GetConsoleScreenBufferInfo(hStdout, &csbi);

	wAttributes = 7 | FOREGROUND_INTENSITY;
	SetConsoleTextAttribute(hStdout, wAttributes);

	cout << endl;

	cout << "   "; cout << "�@�P�@�Q�@�R�@�S�@�T�@�U�@�V�@�W" << endl;
	wAttributes = wAttributes | BACKGROUND_GREEN;
	SetConsoleTextAttribute(hStdout, wAttributes);

	cout << "   "; cout << "����������������������������������" << endl;
	cout << " A "; cout << "���@���@���@���@���@���@���@���@��" << endl;
	cout << "   "; cout << "����������������������������������" << endl;
	cout << " B "; cout << "���@���@���@���@���@���@���@���@��" << endl;
	cout << "   "; cout << "����������������������������������" << endl;
	cout << " C "; cout << "���@���@���@���@���@���@���@���@��" << endl;
	cout << "   "; cout << "����������������������������������" << endl;

	cout << " D "; cout << "���@���@���@������";
	wAttributes = COLOR_BLACK | BACKGROUND_GREEN;
	SetConsoleTextAttribute(hStdout, wAttributes);
	cout << "��";
	wAttributes = COLOR_WHITE | BACKGROUND_GREEN | FOREGROUND_INTENSITY;
	SetConsoleTextAttribute(hStdout, wAttributes);
	cout << "���@���@���@��" << endl;
	cout << "   "; cout << "����������������������������������" << endl;
	cout << " E "; cout << "���@���@���@��";
	wAttributes = COLOR_BLACK | BACKGROUND_GREEN;
	SetConsoleTextAttribute(hStdout, wAttributes);
	cout << "��";
	wAttributes = COLOR_WHITE | BACKGROUND_GREEN | FOREGROUND_INTENSITY;
	SetConsoleTextAttribute(hStdout, wAttributes);
	cout << "�������@���@���@��" << endl;

	cout << "   "; cout << "����������������������������������" << endl;
	cout << " F "; cout << "���@���@���@���@���@���@���@���@��" << endl;
	cout << "   "; cout << "����������������������������������" << endl;
	cout << " G "; cout << "���@���@���@���@���@���@���@���@��" << endl;
	cout << "   "; cout << "����������������������������������" << endl;
	cout << " H "; cout << "���@���@���@���@���@���@���@���@��" << endl;
	cout << "   "; cout << "����������������������������������" << endl;
	cout << endl;

	//���̃e�L�X�g��Ԃɖ߂�
	SetConsoleTextAttribute(hStdout, csbi.wAttributes);
}

/*
�`��I�u�W�F�N�g
�E�K�C�h
�E�{�[�h
�E�X�g�[���i�󔒂͔w�i�Ɠ��F�̃u���b�N)
�E���b�Z�[�W
�E���S(�]�T�������)
�E���j���[(�]�T�������)

�����I�u�W�F�N�g
�E�G�l�~�[
�E�v���C���[
�E�V�[��(�]�T�������)
�E�^�C�g��(�]�T�������)
�E�Q�[�����C��(�]�T�������)
�E����

*/
