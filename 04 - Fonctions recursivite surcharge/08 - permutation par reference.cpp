//
// Created by Lhoric on 09/10/2026.
//
#include <iostream>
#include <iomanip>

using namespace std;

void permutation(int& x,int& y, int& z) {
    int temp1=x;
    int temp2=y;
    int temp3=z;
    x=temp3;
    y=temp1;
    z=temp2;
}

int main() {
    int a;
    int b;
    int c;
    bool recommencer=true;

    while (recommencer) {
        cout<<"Donner a, b, c."<<endl;
        cin>>a>>b>>c;

        cout<<a<<" "<<b<<" " <<c<<endl;

        permutation(a,b,c);

        cout<<"Apres permutation :"<<a <<" "<< b <<" "<< c<<endl;
        cout<<"Recommencer ? (1 oui, 0 non)"<<endl;
        cin>>recommencer;
    }


}