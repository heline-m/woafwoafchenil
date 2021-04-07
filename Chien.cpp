#include <iostream>
#include <stdio.h>
#include <time.h>
#include <vector>
#include <string>
#include "Chien.h"

using namespace std;
string Chien::tableauRace() {
    string m_tableauRace[11];
    m_tableauRace[0] = "beagle";
    m_tableauRace[1] = "labrador";
    m_tableauRace[2] = "border collie";
    m_tableauRace[3] = "bichon";
    m_tableauRace[4] = "yorkshire";
    m_tableauRace[5] = "golden retriever ";
    m_tableauRace[6] = "husky";
    m_tableauRace[7] = "berger allemand";
    m_tableauRace[8] = "berger australien";
    m_tableauRace[9] = "terre-neuve";
    m_tableauRace[10] = "saint-bernard";

    int m_race = rand() % 11;

    return m_tableauRace[m_race];
}
string Chien::tableauNom() {

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

    int m_nom = rand() % 26;

    return tableauNom[m_nom];
}

string Chien::tableauMaitre() {

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
    tableauNom[17] = "Regis";
    tableauNom[18] = "Salome";
    tableauNom[19] = "Titouan";
    tableauNom[20] = "Ugo";
    tableauNom[21] = "Valerie";
    tableauNom[22] = "Wiliam";
    tableauNom[23] = "Xana";
    tableauNom[24] = "Yves";
    tableauNom[25] = "Zac";

    int m_nom = rand() % 26;

    return tableauNom[m_nom];
}

int Chien::codeChien() {
    int codeInit = 0;
    int code = codeInit + 1;
    codeInit = code;
    return code;
}

void Chien::creerChien() {
    m_nom = tableauNom();
    m_race = tableauRace();
    m_maitre = tableauMaitre();
    m_code = codeChien();
}

Chien::Chien() {
    this->m_nom = tableauNom();
    this->m_race = tableauRace();
    this->m_code = m_code;
    this->m_satiete = m_satiete;
    this->m_proprete = m_proprete;
    this->m_bienEtre = m_bienEtre;
    this->m_maitre = tableauMaitre();
    this->m_obeissance = m_obeissance;
}

void Chien::afficher() {
    cout << "nom :" << "" << this->m_nom << endl;
    cout << "code :" << "" << this->m_code << endl;
    cout << "race :" << "" << this->m_race << endl;
    cout << "satiete :" << "" << this->m_satiete << "%" << endl;
    cout << "proprete :" << "" << this->m_proprete << "%" << endl;
    cout << "bienEtre :" << "" << this->m_bienEtre << "%" << endl;
    cout << "maitre :" << "" << this->m_maitre << endl;
}

void Beagle::afficher() {
    cout << "nom :" << "" << this->m_nom << endl;
    cout << "code :" << "" << this->m_code << endl;
    cout << "race :" << "" << this->m_race << endl;
    cout << "satiete :" << "" << this->m_satiete << "%" << endl;
    cout << "proprete :" << "" << this->m_proprete << "%" << endl;
    cout << "bienEtre :" << "" << this->m_bienEtre << "%" << endl;
    cout << "maitre :" << "" << this->m_maitre << endl;
}

void BorderCollie::afficher() {
    cout << "nom :" << "" << this->m_nom << endl;
    cout << "code :" << "" << this->m_code << endl;
    cout << "race :" << "" << this->m_race << endl;
    cout << "satiete :" << "" << this->m_satiete << "%" << endl;
    cout << "proprete :" << "" << this->m_proprete << "%" << endl;
    cout << "bienEtre :" << "" << this->m_bienEtre << "%" << endl;
    cout << "maitre :" << "" << this->m_maitre << endl;
}

void Chihuaha::afficher() {
    cout << "nom :" << "" << this->m_nom << endl;
    cout << "code :" << "" << this->m_code << endl;
    cout << "race :" << "" << this->m_race << endl;
    cout << "satiete :" << "" << this->m_satiete << "%" << endl;
    cout << "proprete :" << "" << this->m_proprete << "%" << endl;
    cout << "bienEtre :" << "" << this->m_bienEtre << "%" << endl;
    cout << "maitre :" << "" << this->m_maitre << endl;
}

// TODO : A mettre dans classe chenil
void Chien::balle() {
    cout << " Vous lancez la balle" << endl;
    int resultat = rand() % 3;
    if (resultat == 1) {
        cout << this->m_nom << " vous rapporte la balle" << endl;
    }
}

void Chien::dressage() {
    cout << " Faisons du dressage" << endl;
}

void Chien::danse() {
    cout << " dansez bien" << endl;
}

void Chien::jeu() {
    int reponse = 0;
    cout << "Vous sortez pour jouer avec le chien " << endl;
    cout << "A quoi voulez vous jouer ? " << endl;
    cout << "Choisissez 1 pour lui envoyer une balle" << endl;
    cout << "Choisissez 2 pour faire du dressage" << endl;
    cout << "Choisissez 3 pour danser avec le chien" << endl;
    cout << "Choisissez 4 pour revenir a l'enclos" << endl;
    cin >> reponse;

    if (reponse == 1) {
        balle();
    } else if (reponse == 2) {
        dressage();
    } else if (reponse == 3) {
        creerChien();
    }

    //void balle
    //  void dressage (assis, coucher, pas bouger, pas toucher)
    // danse avec ton chien
}


