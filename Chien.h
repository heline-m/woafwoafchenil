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

    Chien(std::string m_nom, std::string m_race, std::string m_maitre, int m_code, int m_satiete, int m_proprete,
          int m_bienEtre, int m_obeissance, int mCode) : m_code(mCode) {
        this->m_nom = std::move(m_nom);
        this->m_race = std::move(m_race);
        this->m_code = m_code;
        this->m_satiete = m_satiete;
        this->m_proprete = m_proprete;
        this->m_bienEtre = m_bienEtre;
        this->m_maitre = std::move(m_maitre);
        this->m_obeissance = m_obeissance;
    }
    void afficher();
    //Faire classe jeu avec ces méthodes en public? La sortir de la classe chien
    void balle();
    void dressage();
    void danse();
    void jeu();

private:

    int m_code ;
    std::string m_nom;//Pas de using namespace std, il faut donc mettrestd:: devant string
    std::string m_race;
    int m_satiete;
    int m_proprete;
    int m_bienEtre;
    int m_obeissance;
    std::string m_maitre;
    std::string m_tableauRace[11];
};
#endif