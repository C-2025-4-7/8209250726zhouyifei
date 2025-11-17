#include <iostream>
using namespace std;

int main() {
    // 图形共5行，外层循环控制行数（i从1到5）
    for (int i = 1; i <= 5; i++) {
        // 内层循环控制每行的星号数量：第i行输出i个'*'
        for (int j = 1; j <= i; j++) {
            cout << "*"; // 输出单个星号，不换行
        }
        cout << endl; // 每行星号输出完后，换行
    }
    return 0;
}