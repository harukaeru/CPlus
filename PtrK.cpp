#include <iostream>
using namespace std;

int main() {
    const int* p;
    int a = 1;
    p = &a;

    cout << *p << endl;
    int b = 2;
    p = &b;
    cout << *p << endl;
    // ダメ *p = 4;

    int* const q = &a;
    cout << *q << endl;
    *q = 3;
    cout << *q << endl;
    // ダメ q = &b;
}
