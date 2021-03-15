#ifndef TPRACOWNIK_H
#define TPRACOWNIK_H
#include <iostream>
using namespace std;

struct data{
int rok;
int miesiac;
int dzien;
};

class Tpracownik{   //klasa
private:
    char imie[10];  //pola
    char nazwisko[10];
    float stawkaZaGodzine;
    int liczbaGodzin;
    data dataZatrudnienia;
public:
    void wczytaj(); //metody
    float obliczPlace();
    void wyswietl();
};

#endif // TPRACOWNIK_H
