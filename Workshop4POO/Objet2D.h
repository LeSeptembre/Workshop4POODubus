#pragma once
#include <iostream>
using namespace std;

class Objet2D
{ 
private:
    int dim1;
    int dim2;
    Objet2D* Suivant;  

public:
    Objet2D();
    Objet2D(int t_dim1, int t_dim2);
    virtual int get_Perimetre();
    virtual int get_Aire();
    virtual std::string afficheinfo();

    Objet2D* getSuivant() const;
    void setSuivant(Objet2D* suivant);
};
