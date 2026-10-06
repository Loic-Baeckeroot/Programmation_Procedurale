#include <iostream>
#include <cmath>

using namespace std;

int main(){

    const int chiffre = 9;

    const int premier = (chiffre - (10*(chiffre/10)%10)-(chiffre%10))/100; //recupere le premier chiffre
    const int deuxieme = (chiffre/10)%10; //recupere le deuxieme chiffre
    const int troisieme =chiffre % 10; //recupere le troisieme chiffre

    const int valeur = premier + deuxieme + troisieme;

    cout<<"la somme des chiffres de "<<chiffre<<" = "<<valeur<<endl;

    return EXIT_SUCCESS;
}