#include "PlikTekstowy.h"

string PlikTekstowy::pobierzNazwePliku() {
    return NAZWA_PLIKU;
}

bool PlikTekstowy::czyPlikJestPusty() {
    fstream plik;
    bool pusty = true;
    plik.open(pobierzNazwePliku().c_str(), ios::app);

    if (plik.good() == true) {
        plik.seekg(0, ios::end);
        if (plik.tellg() != 0)
            pusty = false;
    }
    plik.close();
    return pusty;
}
