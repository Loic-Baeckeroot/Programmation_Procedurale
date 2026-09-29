//
// Created by Lhoric on 29/09/2026.
//
#include <iostream>

using namespace std;

int main() {


    if (i < 1) {
        b = true;
    } else {
        b = i > 2;
    }

    b=i<1 ? true : i > 2;

    b = (i<1) or (i>2);






    if (j == 0) {
        b = true;
    } else {
        if (i / j < k) {
            b = false;
        } else {
            b = true;
        }
    }

    b = (j==0)or!(i/j<k);




    if (j == 0) {
        b = false;
    } else {
        if (i / j < k) {
            b = true;
        } else {
            b = false;
        }
    }


    b = !(j==0) or (i/j<k);



}