#include <iostream>
using namespace std;

int main() {
    long int a = 100L;
    cout << a << endl;
    // iine!
    char b = 300;
    cout << b << endl;

    char c = 44;
    cout << c << endl;

    signed char d = -1;
    int e = (unsigned char)d;
    unsigned short int p = (unsigned char)d;
    cout << "e: " << e << endl;
    cout << "p: " << p << endl;
}
