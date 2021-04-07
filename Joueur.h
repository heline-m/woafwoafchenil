#ifndef WOAFWOAFCHENIL_JOUEUR_H
#define WOAFWOAFCHENIL_JOUEUR_H


class Joueur{

private:
    std::string m_nom;
    int m_porteMonnaie;

public:
    Joueur();
    void afficher() const;
};

#endif //WOAFWOAFCHENIL_JOUEUR_H