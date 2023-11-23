#pragma once
#include "Rectangle.h"
class Cube:public Rectangle
{
private:
	int cote;
public:
	Cube();
	Cube(int cote);
	int get_Perimetre();
	int get_Aire();
	string afficheinfo();
};

