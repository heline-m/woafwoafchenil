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
    Chien* toutou = new Chien();

    toutou->jeu();
    toutou->afficher();

    return 0;
}