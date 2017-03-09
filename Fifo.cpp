#include <iostream>
#include "Fifo.h"
#include "NumberZ13.h"
using namespace std;

Fifo::Fifo(const unsigned int& size) {
    queue = new NumberZ13*[size];
    qsize = size;
    quantity = 0;
}

Fifo::Fifo(const Fifo& arg) {
    this->qsize = arg.qsize;
    this->quantity = arg.quantity;
}    

Fifo::~Fifo() {
    int i;
    for(i = 0; i < quantity; i++) {
        delete queue[i];
    }    
    delete[] queue;
}

void Fifo::addElement(const NumberZ13& arg) {
    if(quantity < qsize) {
        queue[quantity] = new NumberZ13(arg);
        quantity++;
    } 
    else {
        cout << "W kolejce nie ma wolnych miejsc" << endl;
    }    
}    

void Fifo::delElement() {
    if(quantity > 0) {
        delete queue[0];
        int i;
        for(i = 0; i < quantity; i++) {
            queue[i] = queue[i+1];
        }
        quantity--; 
    }    
    else {
        cout << "Kolejka jest pusta" << endl;
    }    
}    

void Fifo::setSize(const unsigned int& size) {
    if(quantity < size) {
        qsize = size;
    }
    else {
        int i;
        for(i = size; i < quantity; i++) {
            delete queue[i];
        }     
        qsize = size;  
    }     
}    

void Fifo::queueOut() {
    int i;
    for(i = 0; i < quantity; i++) {
        cout << (*queue[i]) << endl;
    }    
}

const int Fifo::getLength() {
    return qsize;
}    

const int Fifo::getSpace() {
    return qsize - quantity;
}    

const Fifo Fifo::operator+(const Fifo& fifo) {
    if(this->getSpace() > 0) {
        Fifo tempFifo = *this; 
        int i;
        for(i = 1; i < tempFifo.getSpace(); i++) {
            tempFifo.queue[quantity+i] = fifo.queue[i-1];
            *(this->queue[quantity+i]) = *(fifo.queue[i-1]);
        }
        return tempFifo;        
    }    
}    
