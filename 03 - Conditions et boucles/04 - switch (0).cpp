//
// Created by Lhoric on 29/09/2026.
//
#include <iostream>

using namespace std;

int main() {

    switch (a) {
        case 0 : cout << "A"; break;
        case 1 : cout << "Z"; break;
        case 2 : cout << "a"; break;
        default : cout << "b"; break;
    }

    if (a == 0) {
        cout<<"A";
    }
    else if (a == 1) {
        cout<<"Z";
    }
    else if (a == 2) {
        cout<<"a";
    }
    else {
        cout<<"b";
    }








    switch (a) {
        case 0 : cout << "0";
        default : cout << "D"; break;
    }

    if (a == 0) {
        cout<< "0";
    }
    cout<< "D";






    switch (a) {
        case 0 :
        case 1 :
        case 2 :
        case 3 :
        case 4 :
        case 5 : cout << "A"; break;
        case 6 : cout << "3";
        case 7 : cout << "4"; break;
        default : cout << "D";
    }

    if (a >= 0 and a <= 5) {
        cout<< "A";
    }
    else if (a==6) {
        cout<< "34";
    }
    else if (a==7) {
        cout<< "4";
    }
    else {
        cout<<"D";
    }







    if (a == 1) {
        cout << "A";
    } else if (a == 4) {
        cout << "C";
    } else if (a == 2) {
        cout << "E";
    } else {
        cout << "BA";
    }

    switch (a) {
        case 1 :  cout<<"A"; break;
        case 2 :  cout<<"E";break;
        case 4 :  cout<<"C"; break;
        default : cout<<"BA";
    }





    if (a < 0 or a >= 5) {
        cout << "D";
    } else if (a < 3) {
        cout << "A";
    } else {
        cout << "B";
    }

    switch (a) {
        case 0 : ;
        case 1 : ;
        case 2 : cout<<"A";break;
        case 3 : ;
        case 4 : cout<<"B";break;
        default : cout <<"D";break;
    }
















}