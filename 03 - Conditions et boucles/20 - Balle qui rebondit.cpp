//
// Created by Lhoric on 02/10/2026.
//
#include <iostream>
#include <cmath>



using namespace std;

int main() {

    double g = 9.81;
    double h0 = 0.0;
    double h1 = 0.0;
    double E = 0.0;
    double v0 = 0.0;
    double v1 = 0.0;
    int N= 0;


    do {
        cout<<"Coefficient de E ? (0<E<1)"<<endl;
        cin>>E;
    }while (E<0 or E>1);

    do {
        cout<<"Hauteur initiale ? "<<endl;
        cin>>h0;
    }while (h0<0);

    do {
        cout<<"Nombre de rebonds"<<endl;
        cin>>N;
    }while (N<0);

    int N_copy = N;
    v0 = sqrt(2 * g * h0);

    do { //cette boucle va determiner la hauteur h1 apres N rebonds
        v0 = sqrt(2 * g * h0);
        v1 = E * v0;
        h1=(pow(v1,2))/(2 * g);
        h0=h1;
        N_copy = N_copy-1 ;
    }while (N_copy != 0);

    cout<<"La hateur apres "<<N<<" rebonds sera de : "<<h1<< " [M]."<<endl;

    return EXIT_SUCCESS;
}