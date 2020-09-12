#include <iostream>
using namespace std;

enum CompareResult {
    LESS_THAN = 0,
    IS_EQUAL = 1,
    GREATER_THAN = 2
};

CompareResult Compare(int a, int b) {
    if (a < b) {
        return LESS_THAN;
    } else if (a == b) {
        return IS_EQUAL;
    } else {
        return GREATER_THAN;
    }
}

int main() {
    int a, b;
    cout << "数字を2つ入力してください: " << flush;
    cin >> a >> b;

    CompareResult result = Compare(a, b);
    // !?
    bool isSpecial = result == 3;

    switch (result) {
        case LESS_THAN:
            cout << "aはbよりも小さいです" << endl;
            break;
        case IS_EQUAL:
            cout << "aとbは同じ値です" << endl;
            break;
        case GREATER_THAN:
            cout << "aはbよりも大きいです" << endl;
            break;
    }
    return 0;
}
