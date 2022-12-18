#include <iostream>
#include <cmath>

using namespace std;

class complexe
{
public:
    float re;
    float img;

    complexe(float reel,float imaginaire)
    {
        re=reel;
        img=imaginaire;
    }

    void display()
    {
        if (re==0)
        {
            if(img==0)
            {
                cout << "0" ;
            }
            else if(img==1)
            {
                cout <<"i";
            }
            else
            {
                cout <<"i"<<img;
            }
        }
        else if(img==0)
        {
            cout <<re;
        }
        else
        {
            if(img==1)
            {
                cout <<re<<"+i";
            }
            else
            {
                cout <<re<<"+"<<img<<"i";
            }
        }
    }

    void operator ||(complexe z)
    {
        cout << " | ";
        z.display();
        cout << " | = "<<float(sqrt(pow(z.re,2)+pow(z.img,2)))<<endl;
    }

    void argument()
    {
        if(img!=0&&re!=0)
        {
            cout <<"arg(";
            display();
            cout<<")="<<atan(img/re)<<"rad"<<endl;
        }
        else if (img==0&&re==0)
        {
            cout << "le nombre 0 n'a pas d'argument" << endl;
        }
        else
        {
            if(re==0)
            {
                cout <<"arg(";
                display();
                cout<<")="<< "pi/2 rad" << endl;
            }
            else
            {
                cout <<"arg(";
                display();
                cout<<")="<< "0 rad" << endl;
            }
        }
    }

    void operator + (complexe z)
    {
        complexe result_a(re+z.re,img+z.img);
        cout << endl;
        cout << "(";
        z.display();
        cout <<")+(";
        display();
        cout << ") = ";
        result_a.display();
        cout << endl;
    }

    void operator * (complexe z)
    {
        complexe result_p(((re*z.re)-(img*z.img)),((re*z.img)+(img*z.re)));
        cout << endl;
        cout << "(";
        z.display();
        cout <<")x(";
        display();
        cout << ") = ";
        result_p.display();
        cout << endl;
    }

};

void menu()
{
    cout << "Menu"  << endl;
    cout << "= La liste des operations pour s'appliquer sur les nombres complexes         :" << endl;
    cout << "= 1 - calculer l'argument des nombres complexes                              :" << endl;
    cout << "= 2 - calculer le module des nombres complexes                               :" << endl;
    cout << "= 3 - l'additions des nombres complexes                                      :" << endl;
    cout << "= 4 - le produit des deux nombres                                            :" << endl;
    cout << "= 0 - quittez le programme                                                   :\n" << endl;
    cout << "l'operation choisit : " ;
}

int main()
{
    int re1,img1,re2,img2,operation ;

    cout << "Entrez la partie reel du 1ere nombre : ";
        cin >> re1;
    cout << "Entrez la partie imaginaire du 1ere nombre : ";
        cin >> img1;
    cout << "Entrez la partie reel du 2eme nombre : ";
        cin >> re2;
    cout << "Entrez la partie imaginaire du 2eme nombre : ";
        cin >> img2;
    complexe z1(re1,img1);
    complexe z2(re2,img2);

    cout << "Z1=";
    z1.display();
    cout << endl;
    cout << "Z2=";
    z2.display();
    cout << endl;

    do
    {
        menu();
        cin >> operation;
        switch(operation)
        {
        case 1:
            z1.argument();
            z2.argument();
            break;
        case 2:
            z1||z1;
            z2||z2;
            break;
        case 3:
            z1+z2;
            break;
        case 4:
            z1*z2;
            break;
        case 0:
            break;
        default :
            cout << "tapez un nombre valide" << endl;
            break;
        }
    }
    while(operation!=0);
    return 0;
}
