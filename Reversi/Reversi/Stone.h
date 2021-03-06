#ifndef ___Class_Stone
#define ___Class_Stone

#include "DrawObject.h"
#include "ConstantMacro.h"

enum Color
{
	Green,//盤の色(空として扱う)
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