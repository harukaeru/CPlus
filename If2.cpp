#include <iostream>
using namespace std;

void Divide() {
    int a, b;

    cout << "aの値を入力してください。" << flush;

    cin >> a;

    cout << "bの値を入力してください。" << flush;
    cin >> b;

    if (b == 0) {
        cout << "bが0のときは割ることはできません." << endl;
    } else {
        cout << a << '/' << b << " = " <<
            a / b << "..." << a % b << endl;
    }
}

int main() {
    Divide();
    Divide();
}
