#include <iostream>
using namespace std;

void Foo() {
}

int main() {
    int a = 1;
    int b[10];
    int c = 0;

    cout << &a << endl;
    cout << b << endl;
    cout << &c << endl;
}
