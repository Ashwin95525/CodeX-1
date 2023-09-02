#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a, b, c;
    cout << "Input your first number:\n ";
    cin >> a;
    cout << "Input your second number:\n ";
    cin >> b;
    cout << "Input your third number:\n ";
    cin >> c;
    if (a > b && a > c)
    {
        cout << "The greatest number is: " << a;
    }
    if (b > a && b > c)
    {
        cout << "The greatest number is: " << b;
    }
    if (c > b && c > b)
    {
        cout << "The greatest number is: " << c;
    }

    return 0;
}
