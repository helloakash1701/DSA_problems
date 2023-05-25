#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter any number: " << endl;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        if (i % 2 == 0)
        {
            i = i + 1;
        }
        else
        {
            cout << "Odd numbers are: " << i << endl;
            i = i + 1;
        }
    }
}