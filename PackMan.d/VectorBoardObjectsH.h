#include <vector>
#include  "BoardObjectH.h"
#include  "PlayerH.h"
#include  "MonsterH.h"
#include  "BombH.h"
#include  "CookieH.h"
#ifndef H_LIST_OF_OBJECTS
#define H_LIST_OF_OBJECTS
typedef BoardObject* p_BoardObject;


class  VectorBoardObjects
{
	std::vector <p_BoardObject> list;
	std::vector <p_BoardObject>::iterator internalIterator;
public:
	VectorBoardObjects(p_BoardObject theFirst);

	p_BoardObject theFirst();
	p_BoardObject theNext();
	void addOne(p_BoardObject newOne);
	void removeOnePlayer();
	bool isThereAWall();
	int isCookieValue();
};
#endif
