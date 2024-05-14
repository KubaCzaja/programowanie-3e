

#include <iostream>

class Licz
{
private:
    int wartosc;

public:
    Licz() : wartosc(0) {}

    Licz(int initial) :
        wartosc(initial) {}

    void Dodaj(int x)
    {
        wartosc += x;
    }

    void Odejmij(int x)
    {
        wartosc -= x;
    }

    int PobierzWartosc() const
    {
        return wartosc;
    }
};


int main()
{
    Licz licz1;
    std::cout << "Poczatkowa wartosc (licz1): " << licz1.PobierzWartosc() << "\n";

    licz1.Dodaj(5);
    std::cout << "Po dodaniu 5 (licz1): " << licz1.PobierzWartosc() << "\n";

    licz1.Odejmij(3);
    std::cout << "Po odjeciu 3 (licz1): " << licz1.PobierzWartosc() << "\n";

    Licz licz2(10);
    std::cout << "Poczatkowa wartosc (licz2): " << licz2.PobierzWartosc() << "\n";

    licz2.Dodaj(15);
    std::cout << "Po dodaniu 15 (licz2): " << licz2.PobierzWartosc() << "\n";

    licz2.Odejmij(5);
    std::cout << "Po odjeciu 5 (licz2): " << licz2.PobierzWartosc() << "\n";

    return 0;
}

