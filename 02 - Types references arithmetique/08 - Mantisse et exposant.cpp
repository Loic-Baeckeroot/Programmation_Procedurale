//
// Created by Lhoric on 22/09/2026.
//

#include <iostream>
#include <cmath>

using namespace std;

int main() {

    //variables
    double r = 0.0;
    double m = 0.0;
    double b = 0.0;
    double e = 0.0;

    //definition de nombre choisi par l'utilisateur
    cout<<"Entrez le nombre reel : "<<endl;
    cin>>r;

    //verification que nombre strictment positif
    if (r <= 0) {
        cout<<"Erreur : Nombre < 0"<<endl;
        return 0;
    }

    //pour valeur E pour base 10
    e=floor(log10(r));

    //pour valeur B pour base 10
    b=10;

    //pour valeur M pour base 10
    m=r/pow(b,e);

    //reponse pour base 10
    cout<<"Pour base 10 : "<< r << " = "<< m << " * " << b << "^" << e <<endl;


    //pour valeur E pour base 2
    e=floor(log2(r));

    //pour valeur B pour base 2
    b=2;

    //pour valeur M pour base 2
    m=r/pow(b,e);

    //reponse pour base 2
    cout<<"Pour base 2 : "<< r << " = "<< m << " * " << b << "^" << e <<endl;

}