#include <iostream>
using namespace std;

void Init() {
    static int a = 3;
    int b = 3;
    cout << a << endl;
    cout << b << endl;
    cout << &a << endl;
    cout << &b << endl;
    cout << "----------------" << endl;
    a++;
    b++;
}

int main() {
    Init();
    Init();
    Init();
    Init();
    Init();
    Init();
    Init();
    Init();
}
