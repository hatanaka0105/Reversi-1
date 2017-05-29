#include <iostream>
#include "Player.h"

using namespace std;

void Player::Update()
{
	inputString.clear();
	
	Input();
	ConvertInput();
}

void Player::Input()
{
	cin >> inputString;
}

void Player::ConvertInput()
{

}