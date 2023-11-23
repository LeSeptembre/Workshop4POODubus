#include <iostream>
#include "StockageObjet2D.h"
#include "Rectangle.h"
#include "Cube.h"

int main() {
    StockageObjet2D *stockage = new StockageObjet2D;

    stockage->ajouter_AtTail(new Rectangle(3, 4));
    stockage->ajouter_AtTail(new Cube(2));

    stockage->afficherinfos();
    delete stockage;


    return 0;
}
