#include <iostream>
#include <cstdio>
using namespace std;

int f(int x, int y) {
    return 2 * x + y;
}

void Show(int x, int y) {
    char str[50];
    sprintf(str, "f(%d, %d) = %d", x, y, f(x, y));
    cout << "計算結果です" << str << endl;

    printf("printfを使ってみたよ→f(%d, %d) = %d\n", x, y, f(x, y));
}

int main() {
    Show(1, 2);
    Show(182, 144);
}
