#include <iostream>
#include "Tdzialania.h"
#include "Tpracownik.h"
#include "Tstudent.h"

using namespace std;
void menu(){
    cout<<"================================================="<<endl;
    cout<<"|\tMenu:\t\t\t\t\t|"<<endl<<"|\t0 Koniec\t\t\t\t|"<<endl<<"|\t1 Dzialania arytmetyczne (zad.2.2)\t|"<<endl<<"|\t2 Honorarium pracownika (zad.2.3)\t|"<<endl<<"|\t3 Srednia studenta (zad.2.4)\t\t|"<<endl;
    cout<<"================================================="<<endl;
    cout<<"Podaj numer pozycji:";
    }
int main()
{
    int a=0;
    menu();
    cin>>a;
    while(a>0 && a<=3){
            switch (a)
            {
            case 1:
                Tdzialania dzialania;
                dzialania.podajDane();
                dzialania.wypiszDane();
                menu();
                cin>>a;
                break;
            case 2:
                Tpracownik pracownik;
                pracownik.wczytaj();
                pracownik.wyswietl();
                menu();
                cin>>a;
                break;
            case 3:
                Tstudent student;
                student.wczytajDaneStudenta();
                student.wyswietlDaneStudenta();
                menu();
                cin>>a;
                break;
            }
    }

    return 0;
}
