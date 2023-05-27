
#include <iostream>
using namespace std;

int main()
{
    int a = 0;
    int b = 1;
    int i = 1;
    int n = 5;
    cout << a << endl
         << b << endl;
    for (i; i <= n; i++)
    {
        int next = b + a;
        cout << next << endl;
        a = b;
        b = next;
    }
}