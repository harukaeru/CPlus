#include <iostream>
using namespace std;

int main() {
    int score[40] = {
        1, 2, 3, 4, 5, 6, 7, 8, 9, 10,
        11, 12, 13, 14, 15, 16, 17, 18, 19, 20,
        21, 22, 23, 24, 25, 26, 27, 28, 29, 30,
        31, 32, 33, 34, 35, 36, 37, 38, 39, 40
    };

    int sum = 0;
    for (int i = 0; i < 40; i += 2) {
        sum += score[i];
    }

    cout << "スコアの平均は" << sum / 40.0 << "点です" << endl;
}
