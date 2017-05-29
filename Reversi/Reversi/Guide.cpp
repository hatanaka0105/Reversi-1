#include <iostream>
#include <string>
#include <Windows.h>
#include "Guide.h"
#include "Board.h"

using namespace std;

void Guide::Initialize()
{
	hStdout = GetStdHandle(STD_OUTPUT_HANDLE);
	//hStdout�̃R���\�[���X�N���[���o�b�t�@����csbi�Ɏ擾
	GetConsoleScreenBufferInfo(hStdout, &csbi);
}

void Guide::DrawHorizontal()
{
	cout << " �@";

	for (int i = 0; i < HORIZONTAL; i++)
	{
		if (i < 9)
		{
			wchar_t guideOfHorizontal = L'�P' + i;
			wcout << L'�@' << guideOfHorizontal;
		}
		else
		{
			int guideOfHorizontal = i + 1;

			//�O���̏ꍇ0�ƕ\��������
			if (guideOfHorizontal > 99)
				guideOfHorizontal = 0;

			cout << "�@"; cout << guideOfHorizontal;
		}
	}

	cout << endl;
}

void Guide::DrawVertical(int numberOfVertical)
{
	char guideOfVertical = 'A' + numberOfVertical;
	if (guideOfVertical > 'Z')
		guideOfVertical = '?';

	cout << " ";
	cout << guideOfVertical;
	cout << " ";
}