#include "Tdzialania.h"
#include <iostream>
#include <cmath>
using namespace std;

void Tdzialania::podajDane()
{
    cout<<"Podaj a:";
    cin>>a;
    cout<<"Podaj b:";
    cin>>b;
}
void Tdzialania::wypiszDane(){
    cout<<endl<<"Suma (a+b):"<<suma();
    cout<<endl<<"Roznica (a-b):"<<roznica();
    cout<<endl<<"Iloczyn (a*b):"<<iloczyn();
    cout<<endl<<"Iloraz (a/b):";
    iloraz();
    cout<<endl;
    cout<<"Potegowanie (a^b):"<<potegowanie()<<endl;

}


int Tdzialania::suma(){return a+b;}
int Tdzialania::roznica(){return a-b;}
int Tdzialania::iloczyn(){return a*b;}
void Tdzialania::iloraz(){
    if(b!=0){
        cout<<a/b<<" reszty "<<a%b;
    }
    else{
        cout<<"Blad dzialenia";
    }
}

float Tdzialania::potegowanie(){
 return pow(a,b);
}

