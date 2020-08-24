#include <iostream>
using namespace std;

void BirthMonth() {
    int month;

    cout << "あなたは何月生まれですか？" << endl;

    cin >> month;

    if (1 <= month && month <= 12) {
        cout << "へー、" << month << "月生まれなんですか" << endl;
    } else {
        cout << month << "月！？そんな月はないぞ！" << endl;
    }
}

int main() {
    BirthMonth();
    BirthMonth();
}
