#ifndef TDZIALANIA_H
#define TDZIALANIA_H

using namespace std;
class Tdzialania
{
    private:
        int a,b;
    public:
        void podajDane();
        int suma();
        int roznica();
        int iloczyn();
        void iloraz();//uzywam void a nie float, zeby wypisywac czesci dziesietne dzielenia
        float potegowanie();
        void wypiszDane();
};

#endif // TDZIALANIA_H
