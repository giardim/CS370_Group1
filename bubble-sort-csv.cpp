// bubble sort & print as CSV every time something moves
#include <bits/stdc++.h>
#include <fstream>

void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        std::cout << arr[i];
        if (i + 1 != size)
            std::cout << ",";
    }
    std::cout << std::endl;
}

void bubbleSort(int arr[], int n)
{
    int i, j;
    std::ofstream fileCsv;
    fileCsv.open("output.csv");
    for (i = 0; i < n - 1; i++) {

        // Last i elements are already
        // in place
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                std::swap(arr[j], arr[j + 1]); //bubblesort
                
                int k;
                for (k = 0; k < n; k++) //print array at each step as CSV
                {
                    fileCsv << arr[k];
                    if (k + 1 != n)
                        fileCsv << ",";
                }
            fileCsv << "\n";
            //this should be a call to the printArray() function but
            //c++ means i need to use pointers or something idk
            }
        }
    }
    fileCsv << "\n";
}

int main()
{
    int arr[] = { 5, 1, 4, 2, 8};
    //sizeof returns size in bytes, need to be divided by datatype to get
    //actual size
    int N = sizeof(arr) / sizeof(arr[0]);
    printArray(arr, N); 
    //print original array, because the bubble sort function only prints 
    //if it does a swap
    bubbleSort(arr, N);
    return 0;
}
