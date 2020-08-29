#include <iostream>
using namespace std;

void Check(char c) {
    cout << c << "に割り振られた値は、" << (int)(unsigned char)c << "です" << endl;
}

int main() {
    Check('0');
    Check('A');
}
