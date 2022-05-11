#include <iostream>
#include <windows.h>
#include <fstream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    ifstream file("FileWork.txt");

    char fopen[255];
    int n = 0;
    struct item
    {
        char name[30];
        int count[4];
        int fabric[4];
    };

    item items[8];

    if (file.is_open()) {
        
        while (!file.eof()) {
            file.getline(fopen, 255, '\n');
            cout << fopen << endl;
            items[n].name = fopen;
            n++;
        }
        file.close();
        cout << fopen << endl;
    }

}

