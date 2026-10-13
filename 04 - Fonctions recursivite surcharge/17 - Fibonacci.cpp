//
// Created by Lhoric on 13/10/2026.
//
#include <iostream>
using namespace std;

int fibo(int a,int b, int c) {
    int temp = b;
    if (c==0) {
        return a;
    }
    if (a == 0) {
        a=1;
    }
    else {
        b=a;
    }
    return fibo(a+temp,b,c-1);

}

int main() {
    bool recommencer = true;
    int n = 0;
    while (recommencer) {

        cout<<"Fibo  de combien ?"<<endl;
        cin>>n;

        cout<<"Fibo : "<<fibo(0,0,n)<< endl;

        cout<<"Recommencer ?( 1 oui ,0 non)"<<endl;
        cin>>recommencer;
    }
}