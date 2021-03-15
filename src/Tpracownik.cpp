#include "Tpracownik.h"
#include <iostream>
using namespace std;

void Tpracownik::wczytaj(){
cout<<"Podaj imie: ";
cin>>imie;
cout<<"Podaj nazwisko: ";
cin>>nazwisko;
cout<<"Podaj stawke godzinowa: ";
cin>>stawkaZaGodzine;
cout<<"Podaj liczbe godzin: ";
cin>>liczbaGodzin;
cout<<"Data zatrudnienia:"<<endl<<"Rok:";
cin>>dataZatrudnienia.rok;
cout<<"Miesiac:";
cin>>dataZatrudnienia.miesiac;
cout<<"Dzien: ";
cin>>dataZatrudnienia.dzien;
}

float Tpracownik::obliczPlace(){
    return stawkaZaGodzine*liczbaGodzin;
}

void Tpracownik::wyswietl(){
cout<<endl<<imie<<" "<<nazwisko<<" zatrudniony "<<dataZatrudnienia.rok<<"."<<dataZatrudnienia.miesiac<<"."<<dataZatrudnienia.dzien<<" zarobi: "<<obliczPlace()<<endl;
}
