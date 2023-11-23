#include "Cube.h"

Cube::Cube() {
	this->cote = 1;
}
Cube::Cube(int cote) {
	this->cote = cote;

}
int Cube::get_Perimetre() {
	return (this->cote + this->cote) * 2;
}
int Cube::get_Aire() {
	return this->cote * this->cote;
}
string Cube::afficheinfo() {
	string res = "Je suis un Cube";
	return res;

}
