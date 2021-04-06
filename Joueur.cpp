#include <iostream>
#include "Joueur.h"
//Joueur.cpp
using namespace std;

Joueur::Joueur()
{
    cout << " Entrez votre nom : " << endl ;
    cin >> this->m_nom ;

    this->m_porteMonnaie = 100;
}

void Joueur::afficher() const
{
    cout << "porte monnaie :" << m_porteMonnaie << endl ;
}

