#include <iostream>
using namespace std;

void Show(int* array) {
    for (int i = 0; i < 3; i++) {
        array[i] = i * 10;
    }
}

int main() {
    int a[3];

    Show(a);

    cout << a[0] << endl;
    cout << a[1] << endl;
    cout << a[2] << endl;
}
