#ifndef Fifo_H
#define Fifo_H
#include "NumberZ13.h"

class Fifo {
    public:
        Fifo(const unsigned int& size);    // konstruktor argumentowy
        Fifo(const Fifo& arg);    // konstruktor kopiujacy
        ~Fifo();    // destruktor
        void addElement(const NumberZ13& arg);    // dodanie wartosci do kolejki
        void delElement();    // usuniecie wartosci z kolejki
        void setSize(const unsigned int& size);    // zmiana rozmiaru
        void queueOut();    // wyswietlenie zawartosci kolejki na ekran konsoli
        const int getLength();    // zwraca rozmiar kolejki
        const int getSpace();    // pobranie ilosci wolnego miejsca
        const Fifo operator+(const Fifo& fifo);
    private:
        NumberZ13** queue;
        unsigned int quantity;
        unsigned int qsize;
};    

#endif
