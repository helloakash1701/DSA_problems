#include <iostream>
using namespace std;
int main()
{
    char n;
    cout << "Enter a character: " << endl;
    cin >> n;
    if (n == 'a' || n == 'b' || n == 'c' || n == 'd' || n == 'e' || n == 'f' || n == 'g' || n == 'h' || n == 'i' || n == 'j' || n == 'k' || n == 'l' || n == 'm' || n == 'n' || n == 'o' || n == 'p' || n == 'q' || n == 'r' || n == 's' || n == 't' || n == 'u' || n == 'v' || n == 'w' || n == 'x' || n == 'y' || n == 'z')
    {
        cout << "You entered a lower-case character: " << n << endl;
    }
    else if (n == 'A' || n == 'B' || n == 'C' || n == 'D' || n == 'E' || n == 'F' || n == 'G' || n == 'H' || n == 'I' || n == 'J' || n == 'K' || n == 'L' || n == 'M' || n == 'N' || n == 'O' || n == 'P' || n == 'Q' || n == 'R' || n == 'S' || n == 'T' || n == 'U' || n == 'V' || n == 'W' || n == 'X' || n == 'Y' || n == 'Z')
    {
        cout << "You entered an upper-case character: " << n << endl;
    }
    else if (n == '0' || n == '1' || n == '2' || n == '3' || n == '4' || n == '5' || n == '6' || n == '7' || n == '8' || n == '9')
    {
        cout << "You entered a number: " << n << endl;
    }
}