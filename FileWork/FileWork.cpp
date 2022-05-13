#include <iostream>
#include <windows.h>
#include <fstream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    ifstream file("FileWork.txt");
	
	int num;
    int n = 0;
    int j = 0;
    string line;
    struct item
    {
        char name[30];
        char count[4];
        int fabric;
    };

    item items[255];
    
    cout << "¬ведите номер нужного цеха: ";
    cin >> num;

    if (file.is_open()) {
        
        while (!file.eof()) {
            getline(file, line);
           	switch(j){
           		case 0: strcpy(items[n].name, line.c_str());
           		j++;
           		break;
           		case 1: strcpy(items[n].count, line.c_str());
           		j++;
           		break;
           		case 2: items[n].fabric = atoi(line.c_str());
           		if(items[n].fabric == num){
           			cout << items[n].name;
           		}
           		j=0;
            	break;
            }
            n++;
        }
        file.close();
    }

}

