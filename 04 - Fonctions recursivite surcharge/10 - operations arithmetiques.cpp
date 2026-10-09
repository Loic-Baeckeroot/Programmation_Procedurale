//
// Created by Lhoric on 09/10/2026.
//
#include <iostream>

using namespace std;

bool calculer (double x, double y, char a, double& resultat) {
    if (a == '+'){
        resultat = x + y;
    }
    else if (a=='-') {
        resultat = x - y;
    }
    else if (a=='*') {
        resultat = x * y;
    }
    else if (a=='/') {
        resultat = x / y;
    }
    else {
        return false;
    }
    return true;
}

void quatrefonctions (double x, double y, char a,double& resultat) {
    if (calculer (x,y,'+',resultat)) {
        cout<<"Pour laddition nous avons :"<<resultat<<endl;
    }
    if (calculer (x,y,'-',resultat)) {
        cout<<"Pour la soustration nous avons :"<<resultat<<endl;
    }
    if (calculer (x,y,'/',resultat)) {
        cout<<"Pour la division nous avons :"<<resultat<<endl;
    }
    if (calculer (x,y,'*',resultat)) {
        cout<<"Pour la multiplication nous avons :"<<resultat<<endl;
    }
}

int main() {
    double x;
    double y;
    char a;
    double resultat=0;
    double recommencer = true;

    while (recommencer){
        cout<<"Rentrer x, y, a dans l'ordre"<<endl;
        cin>> x>>y>>a;

        quatrefonctions(x,y,a,resultat);


        cout<<"Recommencer ? (1 oui, 0 non)"<<endl;
        cin>>recommencer;
    }


}