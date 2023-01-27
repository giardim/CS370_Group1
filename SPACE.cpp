#include <fstream>

#include "space.hpp"

void space::save(int array[], int size)
{
    std::fstream file("data", std::ios::app);
    for (size_t i = 0; i < size; i++)
    {
        file << array[i] << (i < size - 1 ? "," : "");
    }
    file << "\n";
    file.close();
}
