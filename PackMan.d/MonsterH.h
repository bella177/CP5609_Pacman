#ifndef MONSTER_H
#define MONSTER_H
#include <iostream>

/*
 student id:12666452
 student name:HongYu
 class name: Monster
 date: May 2015
 */
enum MonsterState {HUO, SI}; //enumerate statements

#include "BoardObjectH.h"

class Monster : public BoardObject
{

private:
	MonsterState state;
	ObjectColours color1;
	ObjectColours color2;

public:
	Monster (int start_x, int start_y) :BoardObject(start_x, start_y)
	{
		state = HUO;
		color1 = PURPLE;
		color2 = PURPLE;
		myClass = A_MONSTER;
	}
	
	virtual void touch();
};

#endif // MONSTER_H
