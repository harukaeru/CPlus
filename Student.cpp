#include <iostream>
using namespace std;

const int MAX_NAME = 16;

struct Student {
    char name[MAX_NAME + 1];
    int scoreJapanese;
    int scoreEnglish;
    int scoreMath;
};

void Show(Student student) {
    cout << "名前は" << student.name << endl;
    cout << "国語は" << student.scoreJapanese << endl;
    cout << "英語は" << student.scoreEnglish << endl;
    cout << "数学は" << student.scoreMath << endl;
    student.scoreJapanese = 999;
    cout << "--------" << endl;
}

void Show2(Student &student) {
    cout << "名前は" << student.name << endl;
    cout << "国語は" << student.scoreJapanese << endl;
    cout << "英語は" << student.scoreEnglish << endl;
    cout << "数学は" << student.scoreMath << endl;
    student.scoreJapanese = 999999999;
    cout << "--------" << endl;
}

int main() {
    Student student[] = {
        {"赤井", 50, 50, 50},
        {"青村", 90, 30, 20},
        {"黄島", 90, 90, 100}
    };

    int size = sizeof student / sizeof *student;

    for (int i = 0; i < size; i++) {
        cout << "#########################" << endl;
        Show(student[i]);
        Show2(student[i]);
        Show2(student[i]);
    }

}
