#include <iostream>
using namespace std;

int main() {
    int x[10] = { 1, 2, 3 };

    cout << x << endl;
    cout << *x << endl;
    cout << &x[0] << endl;

    int y[3][5] = {
        { 1, 2, 3, 4, 5 },
        { 11, 12, 13, 14, 15 },
        { 21, 22, 23, 24, 25 },
    };

    cout << "y: " << y << endl;
    cout << "&y: " << &y << endl;
    cout << "&y[0]: " << &y[0] << endl;
    cout << "&y[0][0]: " << &y[0][0] << endl;
    cout << "&y[1][0]: " << &y[1][0] << endl;
    cout << "&y[2][0]: " << &y[2][0] << endl;

    int z[] = { 1, 2, 3 };
    int k[][2] = {
        { 1, 2 },
        { 3, 4 },
        { 5, 6 }
    };

    cout << z << endl;
    cout << k << endl;
}
