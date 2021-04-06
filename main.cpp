#include <iostream>
#include <stdio.h>
#include <time.h>
#include <vector>
#include "Joueur.h"
#include "Chien.h"

using namespace std;

int main() {

    srand(time(NULL));
    Joueur* unJoueur = new Joueur();
    unJoueur->afficher();
    Chien* toutou = new Chien("rio", "beagle", "lili", 1, 12, 23, 56, 20, 0);

    toutou->jeu();
    toutou->afficher();

    return 0;
}