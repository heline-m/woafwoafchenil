#include <iostream>
#include <stdio.h>
#include <time.h>
#include <vector>

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
    chien(string nom, string race, string maitre, int code, int satiete, int proprete, int bienEtre, int obeissance ){
        this->nom =  nom;
        this->race =  race;
        this->code =  code;
        this->satiete =  satiete;
        this->proprete =  proprete;
        this->bienEtre =  bienEtre;
        this->maitre =  maitre;
        this->obeissance = obeissance ;


    }
    string tableauRace(){
        int race;

        string tableauRace[11];
        tableauRace[0] = "beagle";
        tableauRace[1] = "labrador";
        tableauRace[2] = "border collie";
        tableauRace[3] = "bichon";
        tableauRace[4] = "yorkshire";
        tableauRace[5] = "golden retriever ";
        tableauRace[6] = "husky";
        tableauRace[7] = "berger allemand";
        tableauRace[8] = "berger australien";
        tableauRace[9] = "terre-neuve";
        tableauRace[10] = "saint-bernard";

        race = rand() % 11;

       return tableauRace[race];


    }

    string tableauNom(){
        int nom;

        string tableauNom[26];
        tableauNom[0] = "Albert";
        tableauNom[1] = "Bolt";
        tableauNom[2] = "Chippie";
        tableauNom[3] = "Dolly";
        tableauNom[4] = "Erros";
        tableauNom[5] = "Fanfan ";
        tableauNom[6] = "Gerald";
        tableauNom[7] = "Hucla";
        tableauNom[8] = "Iris";
        tableauNom[9] = "Jacar";
        tableauNom[10] = "Kiki";
        tableauNom[11] = "Locky";
        tableauNom[12] = "Mama mia";
        tableauNom[13] = "Nala";
        tableauNom[14] = "Oslo";
        tableauNom[15] = "Pepito";
        tableauNom[16] = "Queen";
        tableauNom[17] = "Rio";
        tableauNom[18] = "Simca";
        tableauNom[19] = "Titi";
        tableauNom[20] = "Ursula";
        tableauNom[21] = "Vanille";
        tableauNom[22] = "Winny";
        tableauNom[23] = "Xanax";
        tableauNom[24] = "Yoda";
        tableauNom[25] = "Zebulon";

        nom = rand() % 25;

        return tableauNom[nom];


    }
    string tableauMaitre(){
        int nom;

        string tableauNom[26];
        tableauNom[0] = "Albert";
        tableauNom[1] = "Bernard";
        tableauNom[2] = "Charles";
        tableauNom[3] = "Dahlia";
        tableauNom[4] = "Eline";
        tableauNom[5] = "François ";
        tableauNom[6] = "Gerald";
        tableauNom[7] = "Huguette";
        tableauNom[8] = "Ines";
        tableauNom[9] = "Jacques";
        tableauNom[10] = "Karine";
        tableauNom[11] = "Louison";
        tableauNom[12] = "Marion";
        tableauNom[13] = "Nathalie";
        tableauNom[14] = "Oscar";
        tableauNom[15] = "Pierre";
        tableauNom[16] = "Quentin";
        tableauNom[17] = "Régis";
        tableauNom[18] = "Salomé";
        tableauNom[19] = "Titouan";
        tableauNom[20] = "Ugo";
        tableauNom[21] = "Valerie";
        tableauNom[22] = "Wiliam";
        tableauNom[23] = "Xana";
        tableauNom[24] = "Yves";
        tableauNom[25] = "Zac";

        nom = rand() % 25;

        return tableauNom[nom];


    }

    int Code(){
        int codeInit = 0;
        int code = codeInit + 1;
        codeInit = code;
        return code;
    }
    void creerChien(){
        nom = tableauNom();
        race =  tableauRace();
        maitre = tableauMaitre();
        code = Code();
        satiete = rand() % 100;
        proprete =rand() % 100;
        bienEtre = rand() % 100;
        obeissance = rand() % 100;
        chien* toutou = new chien(this->nom, this->race, this->maitre, this->code, this->satiete, this->proprete,this->bienEtre,this->obeissance);

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
            creerChien();
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
    chien* toutou = new chien("rio", "beagle", "lili", 1, 12, 23,56,20);

    toutou->jeu();
    toutou->afficher();



    return 0;
}
