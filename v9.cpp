#include <iostream>
#include <cstring>

using namespace std;

void showWord(char *mas, int start, int end)
{
    for (int i = start; i <= end; i++)
    {
        cout << mas[i];
    }
    cout << " ";
    for (int i = end; i >= start; i--)
    {
        cout << mas[i];
    }
}

int main(int argc, char **argv)
{
    system("chcp 1251>nul");
    char *mas = new char[100];
    cin.getline(mas, 100);
    int len = strlen(mas), lock = 0, tmp, start_w = 0, end_w = 0, max_len = -23;
    for (int i = 0; i < len; i++)
    {
        if (mas[i] != ' ')
        {
            if (lock == 0)
            {
                tmp = i + 1; // ищем начало и конец слова, вне зависиимости от кол-ва пробелов
                while (tmp < len && mas[tmp] != ' ')
                {
                    tmp++;
                }
                lock = 1;
                tmp--;

                if (tmp - i > max_len) // поиск самого длинного слова и индексы его концов
                {
                    max_len = tmp - i;
                    start_w = i;
                    end_w = tmp;
                }
            }
        }
        else
        {
            lock = 0;
        }
    }
    showWord(mas, start_w, end_w);
    delete[] mas;
    return 0;
}