#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void InitRand() {
    time_t t = time(NULL);
    int seed = (unsigned int)t;
    srand(seed);
}

int Dice() {
    return rand() % 6 + 1;
}

int main() {
    InitRand();
    for (int i = 0; i < 100; i++) {
        cout << Dice() + Dice() << " " << flush;
    }
}
