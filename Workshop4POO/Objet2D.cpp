#include "Objet2D.h"

Objet2D::Objet2D() : dim1(1), dim2(1), Suivant(nullptr) {}

Objet2D::Objet2D(int t_dim1, int t_dim2) : dim1(t_dim1), dim2(t_dim2), Suivant(nullptr) {}

int Objet2D::get_Perimetre(){
    return (dim1 + dim2) * 2;
}
int Objet2D::get_Aire(){
    return dim1 * dim2;
}
std::string Objet2D::afficheinfo(){
    return "Je suis un Objet2D";
}
Objet2D* Objet2D::getSuivant() const{
    return Suivant;
}
void Objet2D::setSuivant(Objet2D* suivant){
    Suivant = suivant;
}
