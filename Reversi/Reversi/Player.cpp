#include <iostream>
#include "Player.h"

using namespace std;

void Player::Update(Stone stone[VERTICAL][HORIZONTAL])
{
	inputString.clear();
	
	Input(stone);
}

void Player::Input(Stone stone[VERTICAL][HORIZONTAL])
{
	cin >> inputString;
	ConvertInput();

	if(stone[0][0].myColor == (Color)0)
	stone[0][0].myColor = (Color)1;
}

void Player::ConvertInput()
{

}