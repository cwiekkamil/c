#include <iostream>
#include "NumberZ13.h"
#include "Fifo.h"
using namespace std;

int main() {
    int i;
    NumberZ13 x(1);
    NumberZ13 y(-27);
    Fifo kolejka(5); 
    kolejka.addElement(x);
    kolejka.addElement(y);
    kolejka.addElement(4);
    kolejka.delElement();
    kolejka.queueOut();
    cout << y << endl;  
    getchar();
    return 0;
}    
