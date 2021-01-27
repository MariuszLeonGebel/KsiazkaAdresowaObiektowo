#ifndef PLIKTEKSTOWY_H_INCLUDED
#define PLIKTEKSTOWY_H_INCLUDED

#include <iostream>
#include <fstream>


using namespace std;

class PlikTekstowy {
    const string NAZWA_PLIKU;

public:
    PlikTekstowy(string nazwaPliku) : NAZWA_PLIKU(nazwaPliku) {
    }
    string pobierzNazwePliku();
    bool czyPlikJestPusty();
};

#endif // PLIKTEKSTOWY_H_INCLUDED
