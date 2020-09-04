#include <iostream>
using namespace std;

int main() {
    char s[] = "Kaeru";
    for (int i = 0; i < sizeof s / sizeof s[0]; ++i) {
      cout << *&*&*(i + s) << endl;
    }
}

