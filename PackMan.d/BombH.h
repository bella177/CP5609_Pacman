#ifndef BOMB_H
#define BOMB_H
#include <iostream>

/*
student id:12666452
student name:HongYu
class name: Bomb
date: May 2015
*/

enum BombState { BOMB,NBOMB}; //enumerate statements
#include "BoardObjectH.h"

class Bomb : public BoardObject
{
private:
	BombState state;
	ObjectColours color1;
	ObjectColours color2;
public:
	Bomb(int start_x, int start_y):BoardObject(start_x, start_y)
	{
		state = BOMB;
		color1 = ORANGE;
		color2 = ORANGE;
		myClass = A_BOMB;
	};
	
	virtual void touch ();
};

#endif // BOMB_H


