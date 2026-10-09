//Loic_Baeckeroot
#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    int choix=-1;
    int premier=0;
    char recommencer = 'O';
    bool verification = false;

    while (static_cast<int>(recommencer) == 79){

        while ((not(static_cast<int>(recommencer)==79)) or (not(static_cast<int>(recommencer)==78))) {
            cout<<endl<<"Voulez-vous recommencer [O/N] : ";
            cin>>recommencer;
            if ((static_cast<int>(recommencer)==79)or (static_cast<int>(recommencer)==78)) {
                break;
            }
        }
    }
    return EXIT_SUCCESS;
}

