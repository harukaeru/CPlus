#include <iostream>
using namespace std;

int main() {
    char s[] = "hello!";

    for (int i = 0; i < (int)sizeof s; i++) {
        cout << i << ": " << (int)(unsigned char)s[i] << endl;
    }

    int intArray[] = {1, 2, 3, 4, 5, 6, 7};

    cout << "sizeof intArray: " << sizeof intArray << endl;
}
