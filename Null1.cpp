#include <iostream>
using namespace std;

const char* MONTH_NAMES[] = {
    "睦月", "如月", "弥生", "卯月", "皐月", "水無月",
    "文月", "葉月", "長月", "神無月", "霜月", "師走"
};

const char * GetOldMonthName(int num) {
    if (1 <= num && num <= 12) {
      return MONTH_NAMES[num - 1];
    }
    return 0;
}



int main() {
    int in;
    cout << "月を入力してください: " << flush;
    cin >> in;

    const char *name = GetOldMonthName(in);
    if (name == 0) {
        cout << "ぬるぽ" << endl;
        return 0;
    }

    cout << in << "月は" << name << "です。" << endl;
}
