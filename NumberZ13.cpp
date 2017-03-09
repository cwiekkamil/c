#include "NumberZ13.h"

NumberZ13::NumberZ13(const int& number) {    // konstruktor argumentowy
    int num = number;
    if(num >= 0) value = num % 13;
    else value = (num % 13) + 13;  
}

NumberZ13::NumberZ13(const NumberZ13& arg) {    // konstruktor kopiujacy
    this->value = arg.value;
}    

NumberZ13::~NumberZ13() {    // destruktor
}  
  
unsigned int NumberZ13::getValue()const {
    return value;
}     
  
const NumberZ13 NumberZ13::operator+(const NumberZ13& arg) {
    return NumberZ13(this->value + arg.getValue());
}

const NumberZ13 NumberZ13::operator-(const NumberZ13& arg) {
    return NumberZ13(this->value - arg.getValue());
}    

const NumberZ13 NumberZ13::operator*(const NumberZ13& arg) {
    return NumberZ13(this->value * arg.getValue());
}    

const NumberZ13 NumberZ13::operator/(const NumberZ13& arg) {
    int k = 1, i = arg.getValue();
    while((i % 13) != 1) {    // wyznaczanie liczby odwrotnej w Z_13
        i += arg.getValue();
        k++;
    }    
    return NumberZ13(this->value * k);
}  

const NumberZ13 NumberZ13:: operator-() {
    return NumberZ13(- this->value);
}    

bool NumberZ13::operator<(const NumberZ13& arg) {
    return this->value < arg.getValue();
}    

bool NumberZ13::operator>(const NumberZ13& arg) {
    return this->value > arg.getValue();
} 

bool NumberZ13::operator==(const NumberZ13& arg) {
    return this->value == arg.getValue();
} 

bool NumberZ13::operator<=(const NumberZ13& arg) {
    return this->value <= arg.getValue();
} 

bool NumberZ13::operator>=(const NumberZ13& arg) {
    return this->value >= arg.getValue();
} 

bool NumberZ13::operator!=(const NumberZ13& arg) {
    return this->value != arg.getValue();
} 

NumberZ13 NumberZ13::operator=(const NumberZ13& arg) {
    return arg.getValue();
}    

NumberZ13::operator int() {
    return value;
}    
