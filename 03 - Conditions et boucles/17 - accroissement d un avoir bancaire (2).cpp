//
// Created by Lhoric on 29/09/2026.
//
#include <iostream>

using namespace std;

int main()
{
    double init;
    int annes;
    double taux;
    double final=0.0;

    cout<<"Veuillez entrer : init, annes, taux(en%)"<<endl;
    cin>>init>>annes>>taux;

    final = init;

    while (annes != 0) {
        final = final + (init * taux/100);
        annes = annes -1;
    }
cout<<"Apres "<<annes<< " il y aura "<< final<<" CHF."<<endl;



}