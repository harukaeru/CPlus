#include <iostream>
using namespace std;

int StrCount(const char str[], char target) {
    int targetCount = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == target) {
            targetCount++;
        }
    }
    return targetCount;
}

int main() {
    char s[] = "/Users/harukaeru/Workspace/CPlus";
    cout << s << " の/のカウントは" << StrCount(s, '/') << "です" << endl;
}
