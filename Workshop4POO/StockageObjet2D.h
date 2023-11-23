#pragma once
#include "Objet2D.h"

class StockageObjet2D{
private:
    Objet2D* Head;
    Objet2D* Tail;

public:
    StockageObjet2D();
    ~StockageObjet2D();

    void ajouter_AtHead(Objet2D* objet);
    void ajouter_AtTail(Objet2D* objet);
    void ajouter_AtIndex(Objet2D* objet, size_t index);
    
    void supprimer_AtHead();
    void supprimer_AtTail();
    void supprimer_AtIndex(size_t index);
    void afficherinfos();
};














