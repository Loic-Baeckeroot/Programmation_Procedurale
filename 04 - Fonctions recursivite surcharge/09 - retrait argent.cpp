//
// Created by Lhoric on 09/10/2026.
//
#include <iostream>

using namespace std;

void retrait(int& x, int& banque) {
    if (x > banque) {
        cout<<"Erreur: Pas assez de credit"<<endl;
        return;
    }
    banque=banque -x;
}

int main() {
    int argent= 0;
    int banque = 500;
    bool recommencer = true;

    while (recommencer){
        cout<<"Cmb voulez vous retirer ?"<<endl;
        cin>>argent;

        retrait(argent,banque);

        cout<<"Le retrait etait de :"<<argent<<endl<<"Restant dans votre banque :"<<banque<<endl;
        cout<<"Recommencer? (1 oui, 0 non)"<<endl;
        cin>>recommencer;
    }
}