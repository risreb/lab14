#include <iostream>
#include <Windows.h>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    ifstream file("in.txt");
    string word;

    while (file >> word)
    {
        cout << word << endl;
    }
    file.close();

    return 0;
}