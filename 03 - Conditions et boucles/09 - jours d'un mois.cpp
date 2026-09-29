//
// Created by Lhoric on 29/09/2026.
//
#include <iostream>
using namespace std;

int main() {
    cout << "Entrez un no de mois (1-12) : ";
    int no_mois; cin >> no_mois;

    cout << "Ce mois comporte ";

    switch (no_mois) {
        case 1 : cout <<"31  jours";break;
        case 2 : cout <<"28 ou 29 jours";break;
        case 3 : cout <<"31  jours";break;
        case 4 : cout <<" 30 jours";break;
        case 5 : cout <<" 31 jours";break;
        case 6 : cout <<" 30 jours";break;
        case 7 : cout <<" 31 jours";break;
        case 8 : cout <<" 31 jours";break;
        case 9 : cout <<" 30 jours";break;
        case 10 : cout <<" 31 jours";break;
        case 11 : cout <<" 30 jours";break;
        case 12 : cout <<" 31 jours";break;
    }

    cout << " jours." << endl;
}