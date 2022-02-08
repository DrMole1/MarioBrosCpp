#pragma once
static const float SPEED = 10;
static const float GRAVITY = 5;

class Player
{
private :

	float xPos;
	float yPos;


public :

	// Constructor
	Player(float _xPos, float _yPos);

	// Accessors and Mutators
	float GetPosX();
	float GetPosY();
	void SetPosX(float _addValue);
	void SetPosY(float _addValue);
};

