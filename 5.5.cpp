#include<iostream>
using namespace std;

class Point {
private:
    int x;
    int y;
public:
    Point() {
        x = 60;
        y = 80;
    }
    void setPoint(int i, int j) {
        x = 60 + i;
        y = 80 + j;
    }
    void display() {
        cout << "当前坐标值为：(" << x << ", " << y << ")" << endl;
    }
};

int main() {
    Point p;
    cout << "初始化后的坐标：" << endl;
    p.display();

    int i = 10, j = 20;
    p.setPoint(i, j);
    cout << "\n调用setPoint(" << i << ", " << j << ")后的坐标：" << endl;
    p.display();

    i = -5;
    j = 15;
    p.setPoint(i, j);
    cout << "\n调用setPoint(" << i << ", " << j << ")后的坐标：" << endl;
    p.display();

    return 0;
}
