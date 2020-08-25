#include <iostream>
using namespace std;

int main() {
    cout << "計算しますよん" << endl;

    int a, b, op;

    cout << "第1項を入力してください " << flush;
    cin >> a;

    cout << "第2項を入力してください " << flush;
    cin >> b;

    cout << "演算子を入力してください。1: 足し算, 2: 引き算, 3: 掛け算, 4: 割り算" << flush;
    cin >> op;


    cout << "演算結果は、";
    if (op == 1) {
        cout << a + b;
    } else if (op == 2) {
        cout << a - b;
    } else if (op == 3) {
        cout << a * b;
    } else if (op == 4) {
        cout << a / b;
    } else {
        cout << "ぷぎゃー！！";
    }

    cout << "です" << endl;
}
