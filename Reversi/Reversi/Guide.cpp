#include <iostream>
#include <string>
#include <Windows.h>
#include "Guide.h"
#include "Board.h"

using namespace std;

void Guide::DrawHorizontal()
{
	cout << " 　";

	for (int i = 0; i < HORIZONTAL; i++)
	{
		if (i < 9)
		{
			wchar_t guideOfHorizontal = L'１' + i;
			wcout << L'　' << guideOfHorizontal;
		}
		else
		{
			int guideOfHorizontal = i + 1;

			//三桁の場合0と表示させる
			if (guideOfHorizontal > 99)
				guideOfHorizontal = 0;

			cout << "　"; cout << guideOfHorizontal;
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