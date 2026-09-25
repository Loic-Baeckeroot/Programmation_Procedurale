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

int main() { //Calcule du temps de trajet
    double dx = 3;
    double dy = 10;
    double L1 = 6;
    double s1 = 5;
    double s2 = 2;
    double Temps_total = 0.0;

    //QUESTION BONUS//
    cout<<"Veuillez rentrer la distance L1 (L1 >= 0 AND L1 <= 10): "<<endl;
    cin>>L1;
    if ((L1<0)or(L1>10)) {
        cout<<"Attention! L1 >= 0 AND L1 <= 10"<<endl;
        return 0;
    }

    double L2 = sqrt(pow(dx,2)+pow((dy-L1),2));

    Temps_total = Temps_total + L1/s1; //calcul du temps necessaire pour parcourir L1

    Temps_total = Temps_total + L2/s2; //calcul du temps necessaire pour parcourir L2

    cout<<"Le temps necessaire est de "<< Temps_total << " heures." << endl;
}