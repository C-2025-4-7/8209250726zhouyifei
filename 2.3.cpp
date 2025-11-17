#include <iostream>
using namespace std;

int main() {
    // 定义三角形三边
    double a, b, c;
    // 输入三边
    cout << "请输入三角形的三条边：";
    cin >> a >> b >> c;

    // 验证能否构成三角形：任意两边之和大于第三边
    if (a + b > c && a + c > b && b + c > a) {
        // 计算周长
        double perimeter = a + b + c;
        cout << "三角形的周长为：" << perimeter << endl;

        // 判断是否为等腰三角形：至少两边相等
        if (a == b || a == c || b == c) {
            cout << "该三角形是等腰三角形" << endl;
        }
        else {
            cout << "该三角形不是等腰三角形" << endl;
        }
    }
    else {
        cout << "输入的三边无法构成三角形" << endl;
    }

    return 0;
}