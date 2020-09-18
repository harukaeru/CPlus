#include <iostream>
using namespace std;

void Func() {
    static int a;
    int b;
    cout << &a << endl;
    cout << &b << endl;
    cout << "--------------" << endl;
}

void CallFunc() {
    Func();
}

int main() {
    Func();
    CallFunc();
}
