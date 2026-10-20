#include <Windows.h>
#include <iostream>

void Mass(int*& arr, int size)
{
    arr = new int[size];
}

void Append(int*& arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 100 + 1;
    }
}

void PrintArry(int*& arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << "\n";
    }
}

void DeleteArry(int*& arr)
{

    delete arr;
    arr = nullptr;

}

void EndMass(int* arr, int size)
{
    arr[size - 1] = 100;
}


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    srand(time(NULL));

    int size = 5;
    int* arr = nullptr;

    Mass(arr, size);
    Append(arr, size);
    PrintArry(arr, size);
    EndMass(arr, size);
    PrintArry(arr, size);
    DeleteArry(arr);










    return 0;
}