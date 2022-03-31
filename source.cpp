// execution command: g++ source.cpp selection.cpp -o source

#include "selection.h"
#include <iostream>
using namespace std;

int main(void){
    cselection obj; // object generation
    int table[obj.size] = {20,6,55,74,3,45,13,87,46,30};

    obj.show(&table[0]);  // show table before sort
    obj.ssort(&table[0]); // sorting
    obj.show(&table[0]);  // show table after sort

    return 0;
}