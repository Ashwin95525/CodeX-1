#include <iostream>
#include <limits.h>
#include <float.h>
using namespace std;

int main(int argc, char const *argv[])
{
    cout << "The range of (char) is From: " << CHAR_MIN << "to " << CHAR_MAX << endl;
    cout << "The range of (short int) is From: " << INT16_MIN << "to " << INT16_MAX << endl;
    cout << "The range of (long int) is From: " << INT32_MIN << "to " << INT32_MAX << endl;
    cout << "The range of (double) is From: " << DBL_MIN << "to " << DBL_MAX << endl;

    return 0;
}
