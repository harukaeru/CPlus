#include <iostream>
using namespace std;

int main() {
    char str[] = "Hello! I'm kaeru!";

    str[4] = '\0';

    for (int i = 0; str[i] != '\0'; i++) {
        cout << i << ": " << str[i] << endl;
    }
}
