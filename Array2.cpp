#include <iostream>
using namespace std;

void Init(int array[]) {
    for (int i = 0; i < 5; i++) {
        array[i] = i * 3;
    }
}

void Show(int array[]) {
    for (int i = 0; i < 5; i++) {
        cout << array[i] << endl;
    }
}

int main() {
    int n[5];

    Init(n);
    Show(n);

    int a[5];

    Init(&a[0]);
    Show(&a[0]);

}
