#include <iostream>
using namespace std;

void WesternToShowa() {
    int western;

    cout << "西暦を入力してください -> " << flush;

    cin >> western;

    if (western < 1926 || western > 1989) {
        cout << western << "年は昭和ではありません" << endl;
        return;
    }

    int showa = western - 1925;

    cout << western << "年は昭和" << showa << "年です。" << endl;
}

int main() {
    WesternToShowa();
    WesternToShowa();
}
