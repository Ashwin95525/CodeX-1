#include <iostream>
#include <string.h>
using namespace std;
int main(int argc, char const *argv[])
{
    string name, college;
    int age;

    cout << "Enter your full name: \n";
    getline(cin, name);
    cout << "Enter your college name: \n";
    getline(cin, college);
    cout << "Enter your age: \n";
    cin >> age;
    cout << "Hello " << name << ",I see you are " << age << " years old and are currenlty studying at " << college;

    return 0;
}
