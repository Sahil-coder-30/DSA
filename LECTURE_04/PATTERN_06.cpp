#include <iostream>
using namespace std;
int main()
{
    int number;
    char ch = 'A';
    cout << "Enter the number of rows you want to print: ";
    cin >> number;

    int temp;
    for (int i = 0; i <= number; i++)
    {

        for (int j = i; j >= 0; j--)
        {
            temp = ch;
            ch = ch + j;
            cout << ch;
            ch = temp;
        }
        cout << "\n";
    }

    return 0;
}