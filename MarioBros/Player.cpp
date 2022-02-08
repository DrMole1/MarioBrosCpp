#include "Player.h"

Player::Player(float _xPos, float _yPos)
{
	xPos = _xPos;
	yPos = _yPos;
}

float Player::GetPosX()
{
	return xPos;
}

float Player::GetPosY()
{
	return yPos;
}

void Player::SetPosX(float _addValue)
{
	xPos += _addValue;
}

void Player::SetPosY(float _addValue)
{
	yPos += _addValue;
}