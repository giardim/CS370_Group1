#include <iostream>
#include <cstdlib>
#include <fstream>
#include "SPACE.h"

    SPACE::SPACE(int* array, int size)
    {   
        std::ofstream filej;

        filej.open("SPACE.json");

        filej << "{\n";

        a = new int[size];
        for (int i = 0; i < size; i++){
            this->a[i] = array[i];
        }
        for (int i = 0; i < size; ++i){
            filej << "\"Array" << i << "\": \"";
            for (int j = 0; j < size; ++j){
                filej << a[j];
            }
            if (i == size - 1){
                filej << "\"\n";
            }else{
            filej << "\",\n";
            }
        }
        
        filej << "}";
    };
