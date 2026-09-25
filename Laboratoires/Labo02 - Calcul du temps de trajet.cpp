/* ---------------------------
Laboratoire : 02
Auteur(s) : Loic Suyhama Baeckeroot
Date : 25/09/2026
But : Calcul du temps de trajet
Remarque(s) :
--------------------------- */


#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double dx = 3;
    double dy = 10;
    double L1 = 6;
    double s1 = 5;
    double s2 = 2;
    double L2 = sqrt(pow(dx,2)+pow((dy-L1),2));
    double Temps_total = 0.0;

    //QUESTION BONUS//
    cout<<"Veuillez rentrer la distance L1: "<<endl;
    cin>>L1;
    if (L1<0) {
        cout<<"Veuillez entrer une superieure a 0."<<endl;
        return 0;
    }


    Temps_total = Temps_total + L1/s1; //calcul du temps necessaire pour parcourir L1

    Temps_total = Temps_total + L2/s2; //calcul du temps necessaire pour parcourir L2

    cout<<"Le temps necessaire est de "<< Temps_total << " heures." << endl;

    // pour separer la partie decimale (sinon cest pas precis) pas necessaires pour le labo

    double decimal_heure = fmod(Temps_total,1); // ici ca va me donner que la partie decimal (modulo de 1)
    double minutes = decimal_heure * 60; //juste pour avoir les minutes
    double heures = Temps_total - decimal_heure; //pour avoir les heures sans partie decimale
    cout<<"plus precis : "<< heures << " Heures et "<< minutes<< " minutes."<<endl;
}