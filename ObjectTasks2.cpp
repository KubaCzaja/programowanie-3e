#include <iostream>
#include <string>

class Osoba
{
private:
    std::string imie;
    std::string nazwisko;
    int wiek;

public:
    Osoba(const std::string imie , const std::string nazwisko, int wiek)
        : imie(imie),
        nazwisko(nazwisko), wiek(wiek) {}

    void Wypisz() const
    {
        std::cout << "imie: " << imie << ", nazwisko: " << nazwisko << ", wiek: " << wiek << "\n";
    }
};

class Ksiazka
{
private:
    std::string tytul;
    Osoba autor;
    int dataWydania;

public:
    Ksiazka(const std::string tytul, const Osoba& autor, int dataWydania)
        : tytul(tytul), autor(autor), dataWydania(dataWydania) {}

    void Wypisz() const
    {
        std::cout << "tytul: " << tytul << ", autor: " << ", data wydania: " << dataWydania << "\n";
    }
};

int main()
{
    Osoba autor1("Roman", "Janowczyk", 48);
    Osoba autor2("Jan", "Kowalski", 39);

    Ksiazka ksiazka1("")
}

