#include <iostream>
using namespace std;

int main()
{
    int i = 2;
    int n;
    cout << "Enter a number: ";
    cin >> n;
    while (i < n - 1)
    {
        if (n % i == 0)
        {
            cout << "It is not a prime number for i :" << i << endl;
            break;
        }
        else
        {
            cout << "It is a prime number for i: " << i << endl;
            i = i + 1;
        }
    }
}