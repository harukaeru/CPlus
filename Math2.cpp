#include <iostream>
using namespace std;

int main() {
    // 1まで出るよ！
    for (double i = 0; i < 1; i += 0.1) {
        cout << i << " " << flush;
    }
}
