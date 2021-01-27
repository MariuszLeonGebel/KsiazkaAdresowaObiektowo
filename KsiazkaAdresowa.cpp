#include "KsiazkaAdresowa.h"

bool KsiazkaAdresowa::czyUzytkownikJestZalogowany() {
    uzytkownikMenedzer.czyUzytkownikJestZalogowany();
}

void KsiazkaAdresowa::rejestracjaUzytkownika() {
    uzytkownikMenedzer.rejestracjaUzytkownika();
}

void KsiazkaAdresowa::wypiszWszystkichUzytkownikow() {
    uzytkownikMenedzer.wypiszWszystkichUzytkownikow();
}

void KsiazkaAdresowa::logowanieUzytkownika() {
    uzytkownikMenedzer.logowanieUzytkownika();
    if(uzytkownikMenedzer.czyUzytkownikJestZalogowany()) {
        adresatMenedzer = new AdresatMenedzer(NAZWA_PLIKU_Z_ADRESATAMI,uzytkownikMenedzer.pobierzIdZalogowanegoUzytkownika());
    }
}

void KsiazkaAdresowa::zmianaHaslaZalogowanegoUzytkownika() {
    uzytkownikMenedzer.zmianaHaslaZalogowanegoUzytkownika();
}

void KsiazkaAdresowa::wylogowanieUzytkownika() {
    uzytkownikMenedzer.wylogowanieUzytkownika();
    delete adresatMenedzer;
    adresatMenedzer = NULL;
}

void KsiazkaAdresowa::dodajAdresata() {
    if(uzytkownikMenedzer.czyUzytkownikJestZalogowany()) {
        adresatMenedzer->dodajAdresata();
    } else {
        cout<<"Aby dodac adresata, nalezy najpierw sie zalogowac!" << endl;
        system("pause");
    }
}

void KsiazkaAdresowa::wyswietlWszystkichAdresatow() {
    if(uzytkownikMenedzer.czyUzytkownikJestZalogowany()) {
        adresatMenedzer->wyswietlWszystkichAdresatow();
    }
}

void KsiazkaAdresowa::usunAdresata() {
    adresatMenedzer->usunAdresata();
}

void KsiazkaAdresowa::wyszukajAdresatowPoImieniu() {
    adresatMenedzer->wyszukajAdresatowPoImieniu();
}

void KsiazkaAdresowa::wyszukajAdresatowPoNazwisku() {
    adresatMenedzer->wyszukajAdresatowPoNazwisku();
}

void KsiazkaAdresowa::edytujAdresata() {
    adresatMenedzer->edytujAdresata();
}
