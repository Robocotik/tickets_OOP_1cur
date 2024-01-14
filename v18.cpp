#include <iostream>
#include <cstring>

using namespace std;
int main(int argc, char** argv){
    system("chcp 1251>nul");
    char* mas = new char[100];
    cin.getline(mas,100);
    int counter = 0, len = strlen(mas);
    for(int i=0; i < len-1; i++){
        if((i == 0 && mas[i] == 'ğ') || (mas[i] == ' ' && mas[i+1] == 'ğ')){
            counter++;
        }
    }
    cout << counter;
    delete[] mas;
    return 0;
}