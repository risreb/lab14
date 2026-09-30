#include <iostream>
#include <Windows.h>
#include <fstream>

using namespace std;

int main()

{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);


    int size;

    cout << "Введите размер массива: ";

    cin >> size;

    int* arr = new int[size];

    for (int i = 0; i < size; i++)

    {

        cout << "arr[" << i << "] = ";

        cin >> arr[i];

    }

    ofstream file("out.txt");

    file << size << endl;

    for (int i = size - 1; i >= 0; i--)

    {

        file << arr[i] << " ";

    }

    file.close();

    delete[] arr;

    return 0;
}