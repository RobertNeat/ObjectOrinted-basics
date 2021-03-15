#include "Tstudent.h"
#include <iostream>
using namespace std;

void Tstudent::wczytajDaneStudenta(){
    cout<<"Imie studenta: ";
    cin>>imie;
    cout<<"Nazwisko studenta: ";
    cin>>nazwisko;
    cout<<"Oceny:"<<endl;
    for(int a=0;a<3;a++){
        cout<<"ocena "<<a+1<<" : ";
        cin>>egzaminy[a];
    }
}

float Tstudent::sredniaArytmetyczna(){
if(egzaminy[0]!=0 && egzaminy[1]!=0 && egzaminy[2]!=0){
    return (egzaminy[0]+egzaminy[1]+egzaminy[2])/3;
}
}
void Tstudent::wyswietlDaneStudenta(){
cout<<"Student: "<<imie<<" "<<nazwisko<<" osiagnal srednia na poziomie:"<<sredniaArytmetyczna()<<endl;
bool flag=false;
for(int a=0;a<3;a++){
    if(egzaminy[a]<2 || egzaminy[a>5]){
        flag=true;
    }
}
if(flag){cout<<"!Uwaga- student dostal niedozwolona ocene!"<<endl;}
}
