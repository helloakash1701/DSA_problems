#include <iostream>
using namespace std;

int main()
{
    // 3! = 3*2*1
    int i = 0;
    int n;
    int factorial = 1;

    cout << "Enter a number you want to calculate factorial for: " << endl;
    cin >> n;
    while (i < n)
    {
        factorial = factorial * (n - i);
        i = i + 1;
    }
    cout << "Factorial of number: " << n << " is " << factorial << endl;
}