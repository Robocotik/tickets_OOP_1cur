#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char* argv[]){
    char* mas = new char[100];
    cin.getline(mas,100);
    int len = strlen(mas);
    for(int i = 0; i< len; i++){
        if(mas[i] == '+'){
            cout << "--";
        }
        else{
            cout << mas[i];
        }
    }
    delete[] mas;
    return 0;
}