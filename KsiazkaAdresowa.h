#ifndef KSIAZKAADRESOWA_H_INCLUDED
#define KSIAZKAADRESOWA_H_INCLUDED

#include <iostream>
#include <vector>
#include <windows.h>

#include "Uzytkownik.h"

using namespace std;

class KsiazkaAdresowa
{
    int idZalogowanegoUzytkownika;
    int idOstatniegoAdresata;
    int idUsunietegoAdresata;

    vector <Uzytkownik> uzytkownicy;

    Uzytkownik podajDaneNowegoUzytkownika();
    int pobierzIdNowegoUzytkownika();
    bool czyIstniejeLogin(string login);

public:
    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();




};

#endif // KSIAZKAADRESOWA_H_INCLUDED
