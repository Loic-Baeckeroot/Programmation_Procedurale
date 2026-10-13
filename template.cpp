//Loic_Baeckeroot
#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    int x = 1;
    int& ref = x;


    cout<<x<<endl;
    ref++;

    cout<<ref<<endl;
    cout<<x;

}



