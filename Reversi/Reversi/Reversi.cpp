#include <iostream>
#include <Windows.h>
#include "Reversi.h"

#define COLOR_BLACK 0
#define COLOR_WHITE 7

using namespace std;

void Reversi::Run()
{
	cout << "Runだよ～" << endl;

	Reversi::Initialize();

	while (1)
	{
		Reversi::Update();
		Reversi::Draw();

		//TODO：条件を追加する
		break;
	}

	cout << "Run(2回目)だよ～" << endl;
}

void Reversi::Initialize()
{
	cout << "Initializeだよ～" << endl;
	board.Initialize();

	const int green = 0;
	const int black = 1;
	const int white = 2;

	for (int i = 0; i < VERTICAL; i++)
	{
		for (int j = 0; j < HORIZONTAL; j++)
		{
			//中央の左上
			if ((j + 1) * 2 == HORIZONTAL && (i + 1) * 2 == VERTICAL)
			{
				stone[i][j].Initialize(black);
				continue;
			}
			//中央の右上
			if (j * 2 == HORIZONTAL && (i + 1) * 2 == VERTICAL)
			{
				stone[i][j].Initialize(white);
				continue;
			}
			//中央の左下
			if ((j + 1) * 2 == HORIZONTAL && i * 2 == VERTICAL)
			{
				stone[i][j].Initialize(white);
				continue;
			}
			//中央の右下
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
	cout << "Updateだよ～" << endl;
}

void Reversi::Draw()
{
	//描画更新
	system("cls");

	cout << "Drawだよ～" << endl;
	guide.DrawHorizontal();
	board.Draw(stone);

	guide.DrawVertical();

	HANDLE hStdout;
	WORD wAttributes;
	CONSOLE_SCREEN_BUFFER_INFO csbi;//構造体です

	hStdout = GetStdHandle(STD_OUTPUT_HANDLE);
	//hStdoutのコンソールスクリーンバッファ情報をcsbiに取得
	GetConsoleScreenBufferInfo(hStdout, &csbi);

	wAttributes = 7 | FOREGROUND_INTENSITY;
	SetConsoleTextAttribute(hStdout, wAttributes);

	cout << endl;

	cout << "   "; cout << "　１　２　３　４　５　６　７　８" << endl;
	wAttributes = wAttributes | BACKGROUND_GREEN;
	SetConsoleTextAttribute(hStdout, wAttributes);

	cout << "   "; cout << "┏━┳━┳━┳━┳━┳━┳━┳━┓" << endl;
	cout << " A "; cout << "┃　┃　┃　┃　┃　┃　┃　┃　┃" << endl;
	cout << "   "; cout << "┣━╋━╋━╋━╋━╋━╋━╋━┫" << endl;
	cout << " B "; cout << "┃　┃　┃　┃　┃　┃　┃　┃　┃" << endl;
	cout << "   "; cout << "┣━╋━╋━╋━╋━╋━╋━╋━┫" << endl;
	cout << " C "; cout << "┃　┃　┃　┃　┃　┃　┃　┃　┃" << endl;
	cout << "   "; cout << "┣━╋━╋━╋━╋━╋━╋━╋━┫" << endl;

	cout << " D "; cout << "┃　┃　┃　┃●┃";
	wAttributes = COLOR_BLACK | BACKGROUND_GREEN;
	SetConsoleTextAttribute(hStdout, wAttributes);
	cout << "●";
	wAttributes = COLOR_WHITE | BACKGROUND_GREEN | FOREGROUND_INTENSITY;
	SetConsoleTextAttribute(hStdout, wAttributes);
	cout << "┃　┃　┃　┃" << endl;
	cout << "   "; cout << "┣━╋━╋━╋━╋━╋━╋━╋━┫" << endl;
	cout << " E "; cout << "┃　┃　┃　┃";
	wAttributes = COLOR_BLACK | BACKGROUND_GREEN;
	SetConsoleTextAttribute(hStdout, wAttributes);
	cout << "●";
	wAttributes = COLOR_WHITE | BACKGROUND_GREEN | FOREGROUND_INTENSITY;
	SetConsoleTextAttribute(hStdout, wAttributes);
	cout << "┃●┃　┃　┃　┃" << endl;

	cout << "   "; cout << "┣━╋━╋━╋━╋━╋━╋━╋━┫" << endl;
	cout << " F "; cout << "┃　┃　┃　┃　┃　┃　┃　┃　┃" << endl;
	cout << "   "; cout << "┣━╋━╋━╋━╋━╋━╋━╋━┫" << endl;
	cout << " G "; cout << "┃　┃　┃　┃　┃　┃　┃　┃　┃" << endl;
	cout << "   "; cout << "┣━╋━╋━╋━╋━╋━╋━╋━┫" << endl;
	cout << " H "; cout << "┃　┃　┃　┃　┃　┃　┃　┃　┃" << endl;
	cout << "   "; cout << "┗━┻━┻━┻━┻━┻━┻━┻━┛" << endl;
	cout << endl;

	//元のテキスト状態に戻す
	SetConsoleTextAttribute(hStdout, csbi.wAttributes);
}

/*
描画オブジェクト
・ガイド
・ボード
・ストーン（空白は背景と同色のブロック)
・メッセージ
・ロゴ(余裕があれば)
・メニュー(余裕があれば)

処理オブジェクト
・エネミー
・プレイヤー
・シーン(余裕があれば)
・タイトル(余裕があれば)
・ゲームメイン(余裕があれば)
・乱数

*/
