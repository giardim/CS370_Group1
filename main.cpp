#include <iostream>
#include <cstdlib>
#include "SPACE.h"

int main (){
    int i, j;
    int arr[] = { 5, 1, 4, 2, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (i = 0; i < n - 1; i++) {
        SPACE(arr, n);
        // Last i elements are already
        // in place
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                std::swap(arr[j], arr[j + 1]); //bubblesort
            //this should be a call to the printArray() function but
            //c++ means i need to use pointers or something idk
            }
        }
        
    }
}