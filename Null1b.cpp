#include <iostream>
using namespace std;

const char* const MONTH_NAME[] = {
    "睦月", "如月", "弥生", "卯月", "皐月", "水無月",
    "文月", "葉月", "長月", "神無月", "霜月", "師走"
};

const char* GetOldMonth(int month) {
    if (1 <= month && month <= 12) {
        return MONTH_NAME[month - 1];
    }
}

int main() {
    int month;

    cin >> month;
    const char* name = GetOldMonth(month);

    cout << name << endl;

    char foo[3][20] = {
      "あいうえお"
    };
    cout << foo[0] << endl;
}
