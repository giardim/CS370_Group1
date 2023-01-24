#include <iostream>
#include <cstdlib>
#include "SPACE.h"

int main (){
    int array[5] = {0, 1, 2, 3, 4};
    int size = sizeof(array) / sizeof(int);
    SPACE SPACE(array, size);

    return 0;
}