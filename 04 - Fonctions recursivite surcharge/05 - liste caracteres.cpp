//
// Created by Lhoric on 09/10/2026.
//
#include <iostream>
#include <iomanip>

using namespace std;


void liste (char x, char y) {
    int saut = 0;
    for (int a=static_cast<int>(x);a<=static_cast<int>(y);a++) {
        cout<<setw(5)<<static_cast<char>(a);
        saut++;
        if (saut%7==0) {
            cout<<endl;
        }
    }
    cout<<endl<< "Voila.";
}



int main() {
    char x;
    char y;
    bool recommencer=true;

    while (recommencer){
        cout<<"Choisir x et y :"<<endl;
        cin>>x>>y;

        liste(x,y);

        cout<<endl<<"Recommencer ? : (1 oui, 0 non) ";
        cin>>recommencer;
    }
}