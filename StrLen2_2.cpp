#include <iostream>
using namespace std;

int Length(char *str) {
    char *p;
    for (p = str; *p != '\0'; p++) {
    }
    return p - str;
}

void ShowLength(char *str) {
    cout << str << "の長さは" << Length(str) << "です" << endl;
}

int main() {
    char s[] = "hello";
    char t[] = "";
    ShowLength(s);
    ShowLength(t);
}
