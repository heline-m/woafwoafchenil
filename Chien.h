#ifndef WOAFWOAFCHENIL_DEF_CHIEN
#define WOAFWOAFCHENIL_DEF_CHIEN

#include <string>
#include <iostream>
#include <utility>
#include <vector>
#include<random>
//Contenu de Chien.h
class Chien
{
public:

    Chien();

    void afficher();
    //Faire classe jeu avec ces méthodes en public? La sortir de la classe chien
    void balle();
    void dressage();
    void danse();
    void jeu();

private:

    int m_code ;
    std::string m_nom;
    std::string m_race;
    std::string m_maitre;
    int m_satiete=100;
    int m_proprete=100;
    int m_bienEtre=100;
    int m_obeissance=0;

    std::string tableauNom();
    std::string tableauMaitre();
    std::string tableauRace();
    int codeChien();

    void creerChien();
};
#endif