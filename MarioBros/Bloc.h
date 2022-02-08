#pragma once
static const float RAY = 25;
static const float YMODIFIER = 200;
static const float YGROUND = 417;

class Bloc
{
protected :

	float xPos;
	float yPos;


public :

	// Constructor
	Bloc(float _xPos, float _yPos);

	// Accessors and Mutators
	float GetPosX();
	float GetPosY();

};

// Child Class : DestructibleBloc
class DestructibleBloc : public Bloc
{
private :

	float colliderZoneXMin;
	float colliderZoneXMax;
	float colliderZoneY;

public :

	// Constructor
	DestructibleBloc(float _xPos, float _yPos);

	// Accessors and Mutators
	float GetColliderZoneXMin();
	float GetColliderZoneXMax();
	float GetColliderZoneY();
};

// Child Class : MysteryBloc
class MysteryBloc : public Bloc
{
public:
	enum class ObjectInBloc { Coin, Mushroom };

private:

	float colliderZoneXMin;
	float colliderZoneXMax;
	float colliderZoneY;
	ObjectInBloc object; // Object that contains the bloc

public:

	// Constructor
	MysteryBloc(float _xPos, float _yPos, ObjectInBloc _object);

	// Accessors and Mutators
	float GetColliderZoneXMin();
	float GetColliderZoneXMax();
	float GetColliderZoneY();
};

