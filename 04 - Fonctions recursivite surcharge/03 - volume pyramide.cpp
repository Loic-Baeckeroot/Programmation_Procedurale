//
// Created by Lhoric on 06/10/2026.
//
#include <iomanip>
#include <iostream>

using namespace std;

int main() {
    int x=0;
    double h=0.0;
    double b=0.0;
    double l=0.0;
    double volume=0.0;
    cout<<"Valuer base > longueur > hauteur"<<endl;
    cin>>b>>l>>h;
    volume=((b * l * h)/3.0);
    cout<<"Le volume est : "<<fixed<<setprecision(1)<<volume<<endl;
}