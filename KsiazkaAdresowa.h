#ifndef KSIAZKAADRESOWA_H_INCLUDED
#define KSIAZKAADRESOWA_H_INCLUDED

#include <iostream>

#include "UzytkownikMenedzer.h"

using namespace std;

class KsiazkaAdresowa {
    UzytkownikMenedzer uzytkownikMenedzer;
public:
    KsiazkaAdresowa();
    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();


};

#endif // KSIAZKAADRESOWA_H_INCLUDED
