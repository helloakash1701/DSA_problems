#include <iostream>
using namespace std;
int main()
{
    int i = 1;
    int n = 4;
    while (i <= 2)
    {
        int j = 1;
        while (j <= n)
        {
            cout << "*";
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}
