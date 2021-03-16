#include <iostream>
#include <stdio.h>
#include <time.h>

using namespace std;

class chien {
    private:
    int code ;
    string nom;
    string race;
    int satiete;
    int proprete;
    int bienEtre;
    int obeissance;
    string maitre;

    public:
    chien(string nom){
        this->nom =  nom;
        this->race =  "beagle";
        this->code =  1;
        this->satiete =  100;
        this->proprete =  100;
        this->bienEtre =  100;
        this->maitre =  "lili";
        this->obeissance = rand() % 100 ;


    }
    void afficher(){
        cout << "nom :" << this->nom << endl ;
       cout << "code :" << this->code << endl ;
       cout << "race :" << this->race << endl ;
       cout << "satiete :" << this->satiete << "%" << endl ;
       cout << "proprete :" << this->proprete << "%"  << endl ;
       cout << "bienEtre :" << this->bienEtre << "%"  << endl ;
       cout << "maitre :" << this->maitre << endl ;

    }
    void balle(){
        cout << " Vous lancez la balle" << endl;
        int resultat = rand()%3;
        if (resultat == 1){
            cout << this->nom << " vous a raporté la balle" << endl;
        }



    }
    void dressage(){
        cout << " Faisons du dressage" << endl;
    }
    void danse(){
        cout << " danser bien" << endl;
    }

    void jeu(){
        int reponse = 0;
        cout << "Vous sortez pour jouer avec le chien " << endl ;
        cout << "A quoi voulez vous jouer ? " << endl ;
        cout << "Choissiez 1 pour lui envoyer une balle" << endl;
        cout << "Choissiez 2 pour faire du dressage" << endl;
        cout << "Choissiez 3 pour danser avec le chien" << endl;
        cout << "Choissiez 4 pour revenir à l'enclos" << endl;
        cin >> reponse ;

        if(reponse == 1){
            balle();
        }
        else if(reponse == 2){
            dressage();
        }
        else if(reponse == 3){
            danse();
        }

        //void balle
      //  void dressage (assis, coucher, pas bouger, pas toucher)
      // danse avec ton chien


    }







};

class Joueur {
    private:
    string nom;
    int porteMonnaie;
    public:
    Joueur(){
        cout << " rentez votre nom : " << endl ;
        cin >> this->nom ;

        this->porteMonnaie = 100;
    }
    void afficher(){
        cout << "porte monnaie :" << this->porteMonnaie << endl ;
    }

};




int main() {
    srand(time(NULL));
    Joueur* unJoueur = new Joueur();
    unJoueur->afficher();
    chien* toutou = new chien("rio");
    toutou->afficher();
    toutou->jeu();



    return 0;
}
