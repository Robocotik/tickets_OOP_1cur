#include <iostream>
#include <cstring>

char* substr(char* arr, int begin, int len)
{
    char* res = new char[len + 1];
    for (int i = 0; i < len; i++)
        res[i] = *(arr + begin + i);
    res[len] = 0;
    return res;
}

using namespace std;
int main(int argc, char** argv){ 
    system("chcp 1251>nul");
    char* mas= new char[100];
    cin.getline(mas, 100);
    int len = strlen(mas), i=0;
    while (i < len)
    {
        if (mas[i] == 'б'){
            if(strcmp(substr(mas,i,10), "белый орел") == 0){
                cout << "белый лебедь";
                i+=10;
            }
            else{
                cout << mas[i];
            }
        }
        else{
            cout << mas[i];
        }
        i++;
    }
    delete[] mas;
    return 0;
}