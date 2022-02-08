#include "Bloc.h"
#include "framework.h"


Bloc::Bloc(float _xPos, float _yPos)
{
	xPos = _xPos;
	yPos = _yPos;
}

float Bloc::GetPosX()
{
	return xPos;
}

float Bloc::GetPosY()
{
	return yPos;
}

DestructibleBloc::DestructibleBloc(float _xPos, float _yPos) : Bloc(_xPos, _yPos)
{
	xPos = _xPos;
	yPos = _yPos;

	colliderZoneXMin = xPos - RAY * 2;
	colliderZoneXMax = xPos + RAY;
	colliderZoneY = yPos + RAY + 20;
}

float DestructibleBloc::GetColliderZoneXMin()
{
	return colliderZoneXMin;
}

float DestructibleBloc::GetColliderZoneXMax()
{
	return colliderZoneXMax;
}

float DestructibleBloc::GetColliderZoneY()
{
	return colliderZoneY;
}

MysteryBloc::MysteryBloc(float _xPos, float _yPos, ObjectInBloc _object) : Bloc(_xPos, _yPos)
{
	xPos = _xPos;
	yPos = _yPos;
	object = _object;

	colliderZoneXMin = xPos - RAY * 2;
	colliderZoneXMax = xPos + RAY;
	colliderZoneY = yPos + RAY + 6;
}

float MysteryBloc::GetColliderZoneXMin()
{
	return colliderZoneXMin;
}

float MysteryBloc::GetColliderZoneXMax()
{
	return colliderZoneXMax;
}

float MysteryBloc::GetColliderZoneY()
{
	return colliderZoneY;
}
