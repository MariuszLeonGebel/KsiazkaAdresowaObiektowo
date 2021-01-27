#ifndef ADRESATMENEDZER_H_INCLUDED
#define ADRESATMENEDZER_H_INCLUDED

#include <iostream>
#include <vector>
#include <windows.h>
#include <sstream>

#include "Adresat.h"
#include "PlikZAdresatami.h"

using namespace std;

class AdresatMenedzer {
    const int ID_ZALOGOWANEGO_UZYTKOWNIKA;
    vector <Adresat> adresaci;
    PlikZAdresatami plikZAdresatami;
    int idUsuwanegoAdresata;

    int podajIdWybranegoAdresata();
    Adresat podajDaneNowegoAdresata();
    void wyswietlDaneAdresata(Adresat adresat);
    void wyswietlIloscWyszukanychAdresatow(int iloscAdresatow);
    char wybierzOpcjeZMenuEdycja();
    void usunWybranaLinieWPliku(Adresat adresat);
    void zaktualizujDaneWybranegoAdresata(Adresat adresat);

public:
    AdresatMenedzer(string nazwaPlikuZAdresatami, int idZalogowanegoUzytkownika)
        : plikZAdresatami(nazwaPlikuZAdresatami), ID_ZALOGOWANEGO_UZYTKOWNIKA(idZalogowanegoUzytkownika) {
        adresaci = plikZAdresatami.wczytajAdresatowZalogowanegoUzytkownikaZPliku(ID_ZALOGOWANEGO_UZYTKOWNIKA);
    };
    void dodajAdresata();
    void wyswietlWszystkichAdresatow();
    int usunAdresata();
    void wyszukajAdresatowPoImieniu();
    void wyszukajAdresatowPoNazwisku();
    void edytujAdresata();
};

#endif // ADRESATMENEDZER_H_INCLUDED
