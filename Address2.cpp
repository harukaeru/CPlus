#include <iostream>
using namespace std;

int main() {
    int a[10];

    cout << "&a[2]: " << (size_t)&a[2] << endl;
    cout << "&a[2] + 1: " << (size_t)(&a[2] + 1) << endl;
    cout << "&a[3]: " << (size_t)(&a[3]) << endl;
}
