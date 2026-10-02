//
// Created by Lhoric on 02/10/2026.
//
#include <iostream>

using namespace std;

int main() {
    double init=1000;
    int annes;
    double taux;
    double final=0.0;
    int annes_double;

    cout<<"Veuillez entrer : init (minimum 1000)"<<endl;
    cin>>init;

    while (init<1000) {
        cout<<"Erreur init < 1000"<<endl;
        cin>>init;
    }

    cout<<"Veuillez entrer : annes (plus grand que 0!)"<<endl;
    cin>>annes;

    while (annes <= 0) {
        cout<<"Erreur annes < 0!!"<<endl;
        cin>>annes;
    }

    cout<<"Veuillez entrer : taux(en%)(entre -5% et 50%)"<<endl;
    cin>>taux;

    while (taux < (-5) or taux > 50) {
        cout<<"Erreur taux < 5 ou taux > 50."<<endl;
        cin>>taux;
    }


    annes_double = annes;
    final = init;
    while (annes_double != 0) {
        final = final + (final * taux/100);
        annes_double = annes_double -1;
    }
    cout<<"Apres "<<annes<< " il y aura "<< final<<" CHF."<<endl;



}