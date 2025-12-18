#include <iostream>
using namespace std;

int peach(int day) {
    if (day == 10) {
        return 1;
    }
    return (peach(day + 1) + 1) * 2;
}

int main() {
    cout << "第一天摘的桃子总数为：" << peach(1) << endl;
    return 0;
}
