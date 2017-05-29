#include <iostream>
#include "DrawObject.h"
#include "Reversi.h"

using namespace std;

void Reversi::Run()
{
	cout << "Run����`" << endl;

	Reversi::Initialize();

	while (1)
	{
		Reversi::Draw();
		Reversi::Update();

		//TODO�F������ǉ�����
		Reversi::Draw();
		//break;
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
	player.Update(stone);
}

void Reversi::Draw()
{
	//�`��X�V
	system("cls");

	cout << "Draw����`" << endl;
	guide.DrawHorizontal();
	board.Draw(stone, guide);
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
