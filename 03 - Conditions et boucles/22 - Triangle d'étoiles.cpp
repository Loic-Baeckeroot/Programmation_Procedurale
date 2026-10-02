//
// Created by Lhoric on 02/10/2026.
//
#include <iostream>

using namespace std;

int main() {
    int etoiles;

    do {
        cout<<"Entrez une valeur IMPAIRE pour les etoiles."<<endl;
        cin>>etoiles;
    }while (etoiles <= 0);

    for (int i = 0; i <= (etoiles-1)/2; ++i) {
        for (int j=0; j<(etoiles-i); j++) {
            cout<<" ";
        }

        cout<<"*";

        for (int j=i; j>0; --j){
            cout<<"**";

            }
        cout<<endl;
        }
    }






