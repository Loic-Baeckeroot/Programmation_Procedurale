//
// Created by Lhoric on 29/09/2026.
//
#include <iostream>

using namespace std;


double note = 0.0;

int main() {
    cout<<"Quel est la note ? "<< endl;
    cin>> note;

    if (note < 0.0 or note > 6.0) {
        cout<<"ERREUR: La note est invalide"<< endl;
        return 1;
    }
        if (note>=5.25) {
            cout<<"La note est A";
        }
        else if (note>=4.75) {
            cout<<"La note est B";
        }
        else if (note>=4.5) {
            cout<<"La note est C";
        }
        else if (note>=4.25) {
            cout<<"La note est D";
        }
        else if (note>=4.00) {
            cout<<"La note est E";
        }
        else {
            cout<<"La note est F";
        }


}