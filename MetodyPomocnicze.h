#ifndef METODYPOMOCNICZE_H_INCLUDED
#define METODYPOMOCNICZE_H_INCLUDED

#include <iostream>
#include <sstream>
#include <algorithm>

using namespace std;

class MetodyPomocnicze {

public:
    static string konwerjsaIntNaString(int liczba);
    static int konwersjaStringNaInt(string liczba);
    static string wczytajLinie();
    static string zamienPierwszaLitereNaDuzaAPozostaleNaMale(string tekst);
    static int wczytajLiczbeCalkowita();
    static char wczytajZnak();
    static char wybierzOpcjeZMenuGlownego();
    static char wybierzOpcjeZMenuUzytkownika();
};

#endif // METODYPOMOCNICZE_H_INCLUDED
