//
// Created by Lhoric on 29/09/2026.
//
#include <iostream>

using namespace std;

int main() {
    cout << "Livraison en Suisse ? (O/N) "<<endl;
    char reponse; cin >> reponse;

    if (reponse == 'O') {
        cout << "Livraison aux cantons des Grisons ou du Tesisn ? (O/N) "<<endl;
        cin >> reponse;
        if (reponse=='O') {
            cout<<"Prix a payer : 7CHF";
        }
        else {
            cout<<"Prix a payer : 5CHF";
        }
    }
    else {
        cout << "Livraison en Liechstenstein ? (O/N) "<<endl;
        cin >> reponse;
        if (reponse=='O') {
            cout<<"Prix a payer : 7CHF";
        }
        else {
            cout<<"Prix a payer : 10CHF";
        }
    }
    return EXIT_SUCCESS;
}