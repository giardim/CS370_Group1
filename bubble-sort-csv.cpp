// bubble sort & print as CSV every time something moves
#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        cout << arr[i];
        if (i + 1 != size)
            cout << ",";
    }
    cout << endl;
}

void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++) {

        // Last i elements are already
        // in place
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]); //bubblesort
                
                int k;
                for (k = 0; k < n; k++) //print array at each step as CSV
                {
                    cout << arr[k];
                    if (k + 1 != n)
                        cout << ",";
                }
            cout << endl;
            //this should be a call to the printArray() function but
            //c++ means i need to use pointers or something idk
            }
        }
    }
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
