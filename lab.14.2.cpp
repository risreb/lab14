#include <iostream>

#include <fstream>

using namespace std;

int main()

{

    ifstream file("in.txt");

    int size;

    file >> size;

    int* arr = new int[size];

    for (int i = 0; i < size; i++)

    {

        file >> arr[i];

    }

    for (int i = size - 1; i >= 0; i--)

    {

        cout << arr[i] << " ";

    }

    delete[] arr;

    file.close();

    return 0;
}