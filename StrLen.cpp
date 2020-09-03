#include <iostream>
using namespace std;

int StrLen(char str[]) {
    int i = 0;
    for (; str[i] != '\0'; i++) {
    }
    return i;
}

int main() {

    char s[100] = "Hello, I'm Kaeru!!";
    char x[] = "Hello";
    char y[] = "";

    cout << s << endl;
    cout << StrLen(s) << endl;
    cout << "Hello: " << StrLen(x) << endl;
    cout << ": " << StrLen(y) << endl;
}
