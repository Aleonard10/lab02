#include <iostream>
#include <stdio.h>

using namespace std;

int main ()
{
    char numbers;
    int i = 0;
    do
    {
        numbers = getchar();
        switch (numbers)
        {
            case '0':
                cout << "zero" << endl;
                break;
            case '1':
                cout << "one" << endl;
                break;
            case '2':
                cout << "two" << endl;
                break;
            case '3':
                cout << "three" << endl;
                break;
            case '4':
                cout << "four" << endl;
                break;
            case '5':
                cout << "five" << endl;
                break;
            case '6':
                cout << "six" << endl;
                break;
            case '7':
                cout << "seven" << endl;
                break;
            case '8':
                cout << "eight" << endl;
                break;
            case '9':
                cout << "nine" << endl;
                break;
            default:
                break;

        }
    }
    while (getchar() != EOF);
    return 0;
}
