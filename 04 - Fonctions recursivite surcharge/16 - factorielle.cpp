//
// Created by Lhoric on 13/10/2026.
//
#include <iostream>

using namespace std;

int facto(int x) {
    int n=1;

    if (x==0) {
        return 1;
    }

    n = x * facto((x-1));
    return n;
}

int main() {
    bool recommencer = true;
    while (recommencer){
        int x;
        cout<<"Choisir X :";
        cin>>x;

        cout<<facto(x)<<endl;;

        cout<<"Recommncer ? (1 oui 0 non)";
        cin>>recommencer;
    }
}