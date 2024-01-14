#include <iostream>
#include <cstring>
#include <windows.h>
using namespace std;

int main(int argc, char** argv){
    system("chcp 1251>nul");
    int n =  atoi(argv[1]); // это для второго задания в билете, тут оно не нужно, но полезно знать это
    char *mas = new char[100];
    cin.getline(mas,100);
    int len = strlen(mas), needle = -1;
    cin >> needle;
    for(int i=0; i < len; i++){
        if (i == needle){
            cout << " кот ";
        }
        cout << mas[i];
    }   
    delete[] mas;
    return 0;
}