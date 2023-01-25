#include <iostream>
#include <cstdlib>
#include <fstream>
#include "SPACE.h"

    SPACE::SPACE(int* array, int size)
    {   
        std::ofstream file;

        file.open("output.csv", std::ios_base::app);


        a = new int[size];

        for (int i = 0; i < size; ++i){
            this->a[i] = array[i];
        }

        for (int i = 0; i < size; ++i){
            file << a[i];
        }
        
        file << "\n";

        file.close();
    }