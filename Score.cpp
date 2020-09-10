#include <iostream>
using namespace std;

int Sum(const int* scoresJapanese, const int* scoresEnglish, const int* scoresMath, int i) {
    return scoresJapanese[i] + scoresEnglish[i] + scoresMath[i];
}

int main() {
    int scoresJapanese[] = {50, 60, 70};
    int scoresEnglish[] = {30, 90, 20};
    int scoresMath[] = {40, 90, 30};

    cout << Sum(scoresJapanese, scoresEnglish, scoresMath, 0) << endl;
    cout << Sum(scoresJapanese, scoresEnglish, scoresMath, 1) << endl;
    cout << Sum(scoresJapanese, scoresEnglish, scoresMath, 2) << endl;
}
