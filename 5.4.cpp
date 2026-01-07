#include<iostream>
#include<string>
using namespace std;

class Student {
public:
    string id;
    float score;
    Student(string stuId, float stuScore) : id(stuId), score(stuScore) {}
};

void max(Student *stuPtr, int arrLen) {
    Student *pMax = stuPtr;
    for (int i = 1; i < arrLen; i++) {
        if ((stuPtr + i)->score > pMax->score) {
            pMax = stuPtr + i;
        }
    }
    cout << "最高成绩：" << pMax->score << endl;
    cout << "对应学号：" << pMax->id << endl;
}

int main() {
    Student stuArray[5] = {
        Student("2024001", 85.0),
        Student("2024002", 92.5),
        Student("2024003", 78.5),
        Student("2024004", 98.0),
        Student("2024005", 88.0)
    };
    max(stuArray, 5);
    return 0;
}
