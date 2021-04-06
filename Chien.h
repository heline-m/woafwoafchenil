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

protected:

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

Class Beagle : public Chien //Un Beagle est une race de chien
{
public :
    virtual void afficher() const;
    //Faire classe jeu avec ces méthodes en public? La sortir de la classe chien
    void balle();
    void dressage();
    void danse();
    void jeu();

private :
    int m_satiete = 75;// 75 correspondant au seuil de satiété du beagle = max pour qu'il soit repus
    int m_proprete = 10;// Pas très propre hein dis donc... Vivement 100
    int m_bienEtre = 65;//Max requis. N'a pas beaucoup besoin de nous pour aller bien
    int m_obeissance = 25;//min à faire évoluer jusqu'à 100. Un vrai petit filou

};

Class BorderCollie : public Chien //BorderCollie est une race de chien
{
public :
    virtual void afficher() const;
    //Faire classe jeu avec ces méthodes en public? La sortir de la classe chien
    void balle();
    void dressage();
    void danse();
    void jeu();

private :
    int m_satiete = 70;// 70 correspondant au seuil de satiété du beagle = max pour qu'il soit repus
    int m_proprete = 80;// Beau score
    int m_bienEtre = 95;//Max requis. N'a pas beaucoup besoin de nous pour aller bien
    int m_obeissance = 75;//min à faire évoluer jusqu'à 100. Un vrai petit filou

};

Class Chihuaha : public Chien //Un Caniche est une race de chien
{
public :
    virtual void afficher() const;
    //Faire classe jeu avec ces méthodes en public? La sortir de la classe chien
    void balle();
    void dressage();
    void danse();
    void jeu();

private :
    int m_satiete = 5;// 5 correspondant au seuil de satiété du beagle = max pour qu'il soit repus
    int m_proprete = 45;// Pas très propre hein dis donc... Vivement 100
    int m_bienEtre = 90;//Max requis. N'a pas beaucoup besoin de nous pour aller bien
    int m_obeissance = 10;//min à faire évoluer jusqu'à 100. Un vrai petit filou

};

#endif