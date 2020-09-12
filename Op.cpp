#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    if (a == b) {
        cout << "どちらも同じ値です" << endl;
        return 0;
    }


    cout << "大きい方の値は" << (a > b ? a : b) << "です" << endl;
    return 0;
}
