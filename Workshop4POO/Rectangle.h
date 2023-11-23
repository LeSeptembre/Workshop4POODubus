#pragma once
#include "Objet2D.h"


class Rectangle : public Objet2D
{
private:
	int longueur; 
	int largeur;
public:
	Rectangle();
	Rectangle(int t_dim1, int t_dim2);
	int getLongueur();
	int getLargeur();
	virtual int get_Perimetre();
	virtual int get_Aire();
	virtual string afficheinfo();
};

