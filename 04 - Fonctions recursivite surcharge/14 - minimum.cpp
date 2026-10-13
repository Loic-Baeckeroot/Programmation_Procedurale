//
// Created by Lhoric on 13/10/2026.
//
#include <iostream>

using namespace std;

int& min(int& a, int& b, int& c) {
    return a < b ? a : b < c ? b : c;
}

int main() {
    int a = 5;
    int b = 2;
    int c = 9;

    cout << min(a, b, c)<<endl;
    min(a, b, c) = 1;
    int& d = min(a, b, c);
    cout<<a << endl<< b<< endl<< c<<endl<< d<<endl;
}