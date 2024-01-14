#include <iostream>
#include <cstring>
using namespace std;

void showWord(char *str, int start, int end, char symb)
{
    for (int i = start; i <= end; i++)
    {
        cout << str[i];
    }
    cout << symb;
}

int main()
{
    char *str = new char[1000];
    cin.getline(str, 1000);
    int cur = 0, cur_ins = 0, len = strlen(str), start_w = -1, end_w = -1, lock = 0, counter = 0;
    while (cur < len)
    {
        if (str[cur] != ' ' && lock == 0)
        {
            start_w = cur;
            lock = 1;
            cur_ins = cur;
            while (cur_ins < len && str[cur_ins] != ' ' && lock == 1)
            {
                end_w = cur_ins;
                cur_ins++;
            }
            cur = cur_ins;
        }
        if (str[cur] == ' ' || cur == len)
        {
            if (lock == 1)
            {
                // cout << "i calc: " << start_w << "    ||    " << end_w << endl;
                switch (counter)
                {
                case 0:
                    showWord(str, start_w, end_w, ' ');
                    break;
                case 1:
                    showWord(str, start_w, start_w, '.');
                    break;
                case 2:
                    showWord(str, start_w, start_w, '.');
                    break;
                default:
                    cout << "too much words";
                    return 0;
                }
                counter++;
            }
            lock = 0;
        }
        cur++;
    }
    delete[] str;
    return 0;
}