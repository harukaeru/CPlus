#include <iostream>
using namespace std;

int main() {
    int i = 0;
    for (;;) {
        cout << i << ' ';

        if (i == 9) {
            break;
        }
        i += 1;
    }

    cout << endl;
}
