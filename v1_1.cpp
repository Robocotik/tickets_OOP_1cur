#include <iostream>
#include <regex>
using namespace std;
int main()
{
    system("chcp 1251>nul");
    char *str = new char[100];
    cin.getline(str, 100);
    cout << (regex_replace(str, regex("белый орел"), "белый лебедь"));
    delete[] str;
    return 0;
}