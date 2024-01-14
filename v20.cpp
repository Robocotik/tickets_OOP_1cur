#include <iostream>
#include <cstring>

using namespace std;

void showWord(char *mas, int start, int end)
{
    for (int i = start; i >= end; i--)
    {
        cout << mas[i];
    }
}

int main(int argc, char **argv)
{
    char *mas = new char[100];
    cin.getline(mas, 100);
    int i = 0, len = strlen(mas), lock = 0, tmp;
    while (i < len)
    {
        if (mas[i] != ' ')
        {
            if (lock == 0)
            {
                lock = 1;
                tmp = i + 1;
                while (mas[tmp] != ' ' && tmp < len)
                {
                    tmp++;
                }
                tmp--;
                showWord(mas, tmp, i);
                // cout << i << " " << tmp << endl;
            }
        }
        else
        {
            cout << " ";
            lock = 0;
        }
        i++;
    }
    delete[] mas;
    return 0;
}