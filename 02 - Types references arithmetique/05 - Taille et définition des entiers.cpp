//
// Created by Lhoric on 18/09/2026.
//
#include <iostream>
#include <limits>


using namespace std;

int main() {

    using type = unsigned int;
    int bits = numeric_limits<type>::digits + numeric_limits<type>::is_signed ; //valeur utilise pour calculer ensuite le nombre de bytes

    //taille en byte
    cout <<"byte : " << bits/8 << endl;

    //taille en bits
    cout<<"bits :"<< numeric_limits<type>::digits + numeric_limits<type>::is_signed << endl;

    //lintervalle des valeurs possibles
    auto val_min = numeric_limits<type>::lowest();
    auto val_max = numeric_limits<type>::max();
    cout<<"Plage de valeurs : " << val_min << " -> " << val_max << endl;

    //signe ou pas
    cout << "Signe : " ;
    if (numeric_limits<type>::is_signed) {
        cout << "True" << endl;
    }
    else {
        cout << "False" << endl;
    }

    }
