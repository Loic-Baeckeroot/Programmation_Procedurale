//
// Created by Lhoric on 29/09/2026.
//
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double init = 0.0;
    double final = 0.0;
    double taux =0.0;
    double init_stock = 0.0;
    int annes = 0;

    cout<<"Veuillez entrer montant initial,montant cible ,taux interet annuel"<<endl;
    cin>>init >>final>>taux;

    if (init > final) {
        if (taux >= 0) {
            cout<<"erreur le seuil ne sera jamais atteint";
            return EXIT_SUCCESS;
        }
    }
    else if (init < final) {
        if (taux <= 0) {
            cout<<"Erreur le seuil ne sera jamais atteint";
            return EXIT_SUCCESS;
        }
    }
    init_stock = init;

    while (init_stock < final) {
        init_stock= init_stock + (init_stock*taux/100);
        annes = annes + 1;
    }

    cout<<"Ca va prendre : "<<annes<<" ans";
    return EXIT_SUCCESS;






}