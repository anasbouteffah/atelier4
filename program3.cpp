#include <iostream>
#include <list>

using namespace std;

int main()
{
   
    list <int> firstlist; // la list
    list <int>::iterator it;
    int x;

    for (int i = 1; i <7; i++)
    {
        cout << "Veuillez entre le valeur " << i << " de la list:\n";
        cin >> x;
        firstlist.push_back(x);
    }
    
    firstlist.sort(); 

        // affichage de la liste: 
    cout << "la liste triée.:\n";
    for(it=firstlist.begin();it!=firstlist.end();it++){
        cout << *it << endl;
    }
    
    return 0;
}