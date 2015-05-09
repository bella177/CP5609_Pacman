#include "BoardObjectH.h"
#include "BombH.h"
#include  <string>
using namespace std;

/*
student id:12666452
student name:HongYu
class name: Bomb.cpp
date: May 2015
*/

	
void Bomb :: touch ()
{ 
	switch (state)
	{ 
	case BOMB : 
		if (color1==get_Color() )
			set_color(color2);
		else
			set_color(color1);
				break;
		case  NBOMB :
			set_color(INVISIBLE);
	}
}

