#include <iostream>

#include "BoardObjectH.h"
#include "MonsterH.h"

/*
student id:12666452
student name:HongYu
class name: Monster.cpp
date: May 2015
*/

void Monster ::touch()
{ 
	switch (state)
    { 
		case HUO : 
			if (color1==get_Color())
				set_color(color2);
			else
				set_color(color1);
            break;
        case  SI:
            set_color(YELLOW);
    }
}


