#include "StockageObjet2D.h"
#include <iostream>

StockageObjet2D::StockageObjet2D() {
    Head = nullptr;
    Tail = nullptr;
}

StockageObjet2D::~StockageObjet2D(){
    while (Head != nullptr){
        Objet2D* temp = Head;
        Head = Head->getSuivant();
        delete temp;//pas [] pour un objet
    }
}

void StockageObjet2D::ajouter_AtHead(Objet2D* objet){
    objet->setSuivant(Head);
    Head = objet;
    if (Tail == nullptr){
        Tail = Head;
    }
}

void StockageObjet2D::ajouter_AtTail(Objet2D* objet){
    if (Tail == nullptr){
        Head = Tail = objet;
    }
    else{Tail->setSuivant(objet);
        Tail = objet;
    }
}

void StockageObjet2D::ajouter_AtIndex(Objet2D* objet, size_t index){
    if (index == 0){
        ajouter_AtHead(objet);
    }
    else{
        Objet2D* current = Head;
        for (size_t i = 1; i < index && current != nullptr; ++i){
            current = current->getSuivant();
        }

        if (current != nullptr){
            objet->setSuivant(current->getSuivant());
            current->setSuivant(objet);
            if (objet->getSuivant() == nullptr){
                Tail = objet;
            }
        }
        else{
            std::cout << "Erreur 'index" << std::endl;
        }
    }
}

void StockageObjet2D::supprimer_AtHead(){
    if (Head != nullptr){
        Objet2D* temp = Head;
        Head = Head->getSuivant();
        delete temp;
        if (Head == nullptr){
            Tail = nullptr;
        }
    }
}

void StockageObjet2D::supprimer_AtTail()
{
    if (Head != nullptr){
        if (Head == Tail){
            delete Head;
            Head = Tail = nullptr;
        }
        else {
            Objet2D* current = Head;
            while (current->getSuivant() != Tail){
                current = current->getSuivant();
            }
            delete Tail;//pas [] car objet
            Tail = current;
            Tail->setSuivant(nullptr);
        }
    }
}

void StockageObjet2D::supprimer_AtIndex(size_t index){
    if (index == 0){
        supprimer_AtHead();
    }
    else{
        Objet2D* current = Head;
        for (size_t i = 1; i < index && current != nullptr; ++i){
            current = current->getSuivant();
        }

        if (current != nullptr and current->getSuivant() != nullptr){
            Objet2D* temp = current->getSuivant();
            current->setSuivant(temp->getSuivant());
            delete temp;
            if (current->getSuivant() == nullptr){
                Tail = current;
            }
        }
        else{
            std::cout << "Erreur indew" << std::endl;
        }
    }
}

void StockageObjet2D::afficherinfos(){
    Objet2D* current = Head;
    while (current != nullptr){
        std::cout << current->afficheinfo() << std::endl;
        current = current->getSuivant();
    }
}
