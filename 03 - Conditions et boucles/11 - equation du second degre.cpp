//
// Created by Lhoric on 29/09/2026.
//
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    cout << "Donnez les valeurs de a, b, et c de l'equation a*x^2+b*x+c : ";
    double a, b, c;
    cin >> a >> b >> c;

    double delta = b * b - 4 * a * c;

    if (delta > 0) {
        double x1=(-b + sqrt(delta))/(2*a);
        double x2=(-b - sqrt(delta))/(2*a);
        cout<<"x1 = "<<x1<<endl<<"x2 = "<<x2;
        return EXIT_SUCCESS;
    }
    else if (delta == 0) {
        double x = -b/2*a;
        cout<<"la seule solution possible est : "<<x;
        return EXIT_SUCCESS;
    }
    else if (delta < 0) {
        cout<<"Lequation nas pas de solution. (Delta negatif)";
        return EXIT_SUCCESS;
    }
}