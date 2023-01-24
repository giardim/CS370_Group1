#include <iostream>
#include <cstdlib>
#include "SPACE.h"

    SPACE::SPACE(int* array, int size)
    {
        a = new int[size];
        for (int i = 0; i < size; i++){
            this->a[i] = array[i];
        }
        for (int i = 0; i < size; ++i){
            std::cout << a[i];
        }
    };
