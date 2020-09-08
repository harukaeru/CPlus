#include <iostream>
using namespace std;

const char* MONTH_NAMES[] = {
    "睦月", "如月", "弥生", "卯月", "皐月", "水無月",
    "文月", "葉月", "長月", "神無月", "霜月", "師走"
};

const char* GetOldMonthName(int i) {
    if (1 <= i && i <= 12) {
        return MONTH_NAMES[i - 1];
    }

    return NULL;
}


int main() {
    int month;
    cout << "月を入力してください: " << flush;
    cin >> month;

    const char* name = GetOldMonthName(month);

    if (name == NULL) {
        cout << "ぬるぽ" << endl;
        return 0;
    }

    cout << month << "月は" << name << "です。" << endl;
}
