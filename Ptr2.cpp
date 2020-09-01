#include <iostream>
using namespace std;

int main() {
    int a = 2;
    int *p = &a;

    a = 5;
    cout << "a = " << a << endl;
    cout << "p = " << p << endl;
    cout << "*p = " << *p << endl;

    *p = 4;
    cout << "a = " << a << endl;
    cout << "p = " << p << endl;
    cout << "*p = " << *p << endl;

}
