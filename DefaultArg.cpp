#include <iostream>
using namespace std;

void Func1(int d = 1) {
    cout << 'd' << d << endl;
}

int main() {
    Func1();
    Func1(2);
}
