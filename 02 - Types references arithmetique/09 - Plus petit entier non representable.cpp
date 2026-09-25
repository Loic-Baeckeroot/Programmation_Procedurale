//
// Created by Lhoric on 22/09/2026.
//
#include <iostream>
#include <cmath>
#include <limits>
#include <iomanip>
using namespace std;

int main() {
    float x=pow(2,numeric_limits<float>::digits)+1;
    cout<<x<<endl;

    int n = 16777217;
    cout << boolalpha << setprecision(10);
    cout << "1) " << static_cast<float>(n) << endl; //16777217 devient 16777216 car 16777217 et plus grand que le max de float qui est 16777216
    cout << "2) " << (static_cast<float>(n) == n) << endl; //ici le n qui est un int doit se transformer en float pour faire la comparaison entre float - float, donc comme avant 16777217 est trop grand pour rentrer dans le float donc il devient 16777216
    cout << "3) " << (static_cast<int>(static_cast<float>(n)) == n) << endl; //comme notre 16777217 etait devenu 16777216 maintenant quil doit redevenir un int alors il devient 16777216

}