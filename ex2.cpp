#include <iostream>
#include <string>
using namespace std;

void afficherDateHeure(const string& dateHeure) {
    if ( dateHeure.length() != 12 )
        cerr << "Chaine invalide." << endl;
    else
    {
        cout << "Date  : " << dateHeure.substr(0,2) << "/" << dateHeure.substr(2,2) << "/" << dateHeure.substr(4,4) << endl;
        cout << "Heure : " << dateHeure.substr(8,2) << "h" << dateHeure.substr(10,2) << endl;
    }
}

int main () {
    string str("121220220350");
    afficherDateHeure(str);
    return 0;
}