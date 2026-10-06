//
// Created by Lhoric on 02/10/2026.
//
#include <iostream>
#include <limits>

using namespace std;
int main() {
    int x;
    int y;
    int reponse = -1;


    cout<<"2 nombres entiers positif : "<<endl;
    cin>>x>>y;

    for (int i=1; reponse == -1; i++) {
        if (i % x == 0) {
            if (i % y == 0) {
                reponse = i;
            }
        }
        if (i == numeric_limits<int>::max()) {
            cout<<"Erreur : Limite int max atteinte"<<endl;
            return EXIT_FAILURE;
        }

    }

    cout<<"ppmc pour : "<< x <<" et "<< y <<" est : "<< reponse;
}