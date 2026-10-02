//
// Created by Lhoric on 02/10/2026.
//
#include <iostream>

using namespace std;
int main() {
    int x;
    int y;
    int x_stock;
    int y_stock;


    cout<<"2 nombres entiers positif : "<<endl;
    cin>>x>>y;

    x_stock = x;
    y_stock = y;


    while (!(x_stock == y_stock)){

        if (x_stock < y_stock) {
            x_stock = x_stock;
            for (int j=1;(x_stock < y_stock and !(x_stock!=y_stock));++j){
                if (x_stock*j > y_stock) {
                    x_stock = x_stock * j;
                }
            }

        }

        else {
            for (int j=1;(y_stock < x_stock and !(y_stock!=x_stock));++j) {
                if (y_stock*j > x_stock) {
                    y_stock = y_stock * j;
                }
            }
        }
    }

    cout<<"ppmc pour : "<< x << y <<" est : "<< x_stock;
}