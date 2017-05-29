#ifndef ___Class_Stone
#define ___Class_Stone

#include "DrawObject.h"

enum Color
{
	Green,//”Õ‚ÌF(‹ó‚Æ‚µ‚Äˆµ‚¤)
	Black,
	White
};

class Stone : public DrawObject
{
public:
	Color myColor;

	void Initialize(int colorNumber);
	void Update();
	void Draw();
};

#endif