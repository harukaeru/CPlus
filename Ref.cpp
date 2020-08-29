#include <iostream>
using namespace std;

void WesternToShowa(int& y) {
    if (1926 <= y && y <= 1988) {
        y = y - 1925;
    } else {
        y = 0;
    }
}

void Showa() {
    int year;
    cout << "西暦を入力してください: " << flush;
    cin >> year;

    WesternToShowa(year);
    cout << "昭和" << year << "年です" << endl;
}

int main () {
    Showa();
    Showa();
}
