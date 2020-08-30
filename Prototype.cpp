#include <iostream>
using namespace std;

int f(int x, int y);

int main() {
    cout << "f(2, 1) = " << f(2, 1) << endl;
    cout << "f(188, 144) = " << f(188, 144) << endl;
}

int f(int x, int y) {
    return 2 * x + y;
}
