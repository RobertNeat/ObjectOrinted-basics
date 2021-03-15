#ifndef TSTUDENT_H
#define TSTUDENT_H
#include <iostream>
using namespace std;

class Tstudent
{
    private:
        char imie[10];
        char nazwisko[10];
        float egzaminy[3]={0,0,0};
    public:
        void wczytajDaneStudenta();
        float sredniaArytmetyczna();
        void wyswietlDaneStudenta();
};

#endif // TSTUDENT_H
