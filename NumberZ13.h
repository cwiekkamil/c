#ifndef NumberZ13_H
#define NumberZ13_H

class NumberZ13 {    // liczba z ciala Z_13
    public:
        NumberZ13(const int& number);
        NumberZ13(const NumberZ13& arg);    // konstruktor kopiujacy
        ~NumberZ13();    // destruktor
        unsigned int getValue()const;    // zwraca wartosc liczby Z_13
        
        // operatory arytmetyczne dla liczb z ciala Z_13 (modulo 13):
        const NumberZ13 operator+(const NumberZ13& arg);
        const NumberZ13 operator-(const NumberZ13& arg);
        const NumberZ13 operator*(const NumberZ13& arg);
        const NumberZ13 operator/(const NumberZ13& arg);
        const NumberZ13 operator-();    // zwraca liczbe przeciwna y do podanej x
                                        // (x + y = 0 w Z_13)
        // operatory logiczne:
        bool operator<(const NumberZ13& arg);
        bool operator>(const NumberZ13& arg);
        bool operator==(const NumberZ13& arg);
        bool operator<=(const NumberZ13& arg);
        bool operator>=(const NumberZ13& arg);
        bool operator!=(const NumberZ13& arg);
        
        NumberZ13 operator=(const NumberZ13& arg);    // operator przypisania
        operator int();
    private:
        unsigned int value;
};

#endif
