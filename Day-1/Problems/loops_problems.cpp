#include <iostream>
using namespace std;
int main()
{
    // counting from 1-N
    // int n;
    // cout << "Enter a number where you want to count to: " << endl;
    // cin >> n;
    // int i = 1;
    // while (i <= n)
    // {
    //     cout << "You entered: " << i << endl;
    //     i = i + 1;
    // }

    // sum problem  n/2(a+l)

    int a;
    cout << "Enter a number where you want to count to: " << endl;
    cin >> a;
    int sum = 0;
    int i = 1;
    while (i <= a)
    {
        // cout << "You entered: " << i << endl;
        sum = sum + i;
        i = i + 1;
    }
    cout << "Total sum: " << sum << endl;
}