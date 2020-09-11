#include <iostream>

const int MAX_NAME = 16;

struct Student {
    char name[MAX_NAME + 1];
    int scoreJapanese;
    int scoreEnglish;
    int scoreMath;
};

void Show(const Student* student) {
    std::cout << "名前は" << student->name << std::endl;
    std::cout << "国語は" << student->scoreJapanese << std::endl;
    std::cout << "英語は" << student->scoreEnglish << std::endl;
    std::cout << "数学は" << student->scoreMath << std::endl;
    std::cout << "---------------------" << std::endl;
}


int main() {
    Student students[] = {
        {"赤井", 50, 50, 50},
        {"白井", 90, 90, 90},
    };

    const int studentSize = sizeof students / sizeof *students;

    for (int i = 0; i < studentSize; i++) {
        Show(&students[i]);
    }
}
