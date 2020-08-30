#include <iostream>
#include <cstdlib>
using namespace std;

int Dice() {
    return (int)(rand() / ((double)RAND_MAX) * 6) + 1;
}

int main() {
    for (int i = 0; i < 200; i++) {
      cout << Dice() + Dice() << " " << flush;
    }
}
