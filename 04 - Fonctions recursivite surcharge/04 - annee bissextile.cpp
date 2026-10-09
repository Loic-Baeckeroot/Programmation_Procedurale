//
// Created by Lhoric on 06/10/2026.
//
#include <iostream>

using namespace std;

bool estBissextile (int n) {
    if ((n % 400 == 0) or (n % 4 == 0)) {
        return true;
    }
    else {
        return false;
    }
}

int main() {

    int anne=0;

    cout<<"Anne = ? ;"<<endl;
    cin>>anne;

    if (estBissextile(anne)) {
        cout<<"Cest bissextile";
        return EXIT_SUCCESS;
    }
    else {
        cout<<"Not bissextile";
        return EXIT_SUCCESS;
    }
}