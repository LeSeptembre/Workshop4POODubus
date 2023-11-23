#include "Rectangle.h"

Rectangle::Rectangle() {
	this->longueur = 1;
	this->largeur = 1;
}
Rectangle::Rectangle(int t_dim1, int t_dim2) {
	this->longueur = t_dim1;
	this->largeur = t_dim2;
}
int Rectangle::getLongueur() {
	return this->longueur;
}
int Rectangle::getLargeur() {
	return this->largeur;
}
int Rectangle::get_Perimetre() {
	return (getLongueur() + getLargeur()) * 2;
}
int Rectangle::get_Aire() {
	return getLongueur() * getLargeur();
}
string Rectangle::afficheinfo() {
	string res = "Je suis un Rectangle";
	return res;

}