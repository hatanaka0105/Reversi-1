#include <iostream>
#include "DrawObject.h"
#include "Reversi.h"

using namespace std;

void Reversi::Run()
{
	cout << "Runだよ～" << endl;

	Reversi::Initialize();

	while (1)
	{
		Reversi::Draw();
		Reversi::Update();

		//TODO：条件を追加する
		Reversi::Draw();
		//break;
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
	player.Update(stone);
}

void Reversi::Draw()
{
	//描画更新
	system("cls");

	cout << "Drawだよ～" << endl;
	guide.DrawHorizontal();
	board.Draw(stone, guide);
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
