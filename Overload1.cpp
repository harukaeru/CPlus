#include <iostream>
using namespace std;

int abs(int x) {
    if (x < 0) {
        return -x;
    } else {
        return x;
    }
}

double abs(double x) {
    if (x < 0) {
        return -x;
    } else {
        return x;
    }
}

int main() {
    cout << "-100 => " << abs(-100) << endl;
    cout << "90 => " << abs(90) << endl;
    cout << "-100.2 => " << abs(-100.2) << endl;
    cout << "90.3 => " << abs(90.3) << endl;
}
