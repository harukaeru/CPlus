#include <iostream>
using namespace std;


int main() {
    int a, b, op;

    cout << "第1項を入力してください: " << flush;
    cin >> a;

    cout << "第2項を入力してください: " << flush;
    cin >> b;

    cout << "計算方式を入力してください。1: 足し算, 2: 引き算, 3: 掛け算, 4: 割り算" << flush;
    cin >> op;

    switch (op) {
        case (1): {
            cout << a << " + " << b << " = " << a + b << endl;
            break;
        }
        case (2): {
            cout << a << " - " << b << " = " << a - b << endl;
            break;
        }
        case (3): {
            cout << a << " * " << b << " = " << a * b << endl;
            break;
        }
        case (4): {
            cout << a << " / " << b << " = " << a / b << endl;
            break;
        }
    }
}
