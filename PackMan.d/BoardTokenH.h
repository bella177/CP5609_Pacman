#ifndef BOARD_TOKEN_H
#define BOARD_TOKEN_H
/* 
 */

#include <iostream>

enum TokenColors { BLACK, YELLOW, BLUE, RED, INVISIBLE, BACKGROUND};
enum TipusToken { AS_BACKGROUND, A_COOKIE,  A_PLAYER ,A_WALL};

/*
 -------------------------------------------------
 */

class BoardToken
{

private:
        int x,y;
        TokenColors colorActual;
protected:
	TipusToken myClass;
	void set_color(TokenColors new_color)
			{colorActual=new_color;};
        void set_x(int new_x) { x=new_x;};
        void set_y(int new_y) {y=new_y;};

public:
        BoardToken (int initial_x, int initial_y);

        int get_x() { return x;};
        int get_y() { return y;};
		
	    TipusToken get_Type() {return myClass;}
        TokenColors get_Color() {return colorActual; }

        virtual void touch() {colorActual=BACKGROUND; }
	
	virtual void printMyClass();
};

#endif // BOARD_TOKEN_H
