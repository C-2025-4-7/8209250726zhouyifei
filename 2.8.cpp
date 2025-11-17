#include <iostream>
#include <cmath>
#include <<iomanip>
using namespace std;

int main() {
    double a, xn, xn1;
    // 输入 a
    cout << "请输入 a：";
    cin >> a;

    // 初始化 xn（可先取 a 的一半作为初始值）
    xn = a / 2;

    do {
        // 根据迭代公式计算 xn1
        xn1 = 0.5 * (xn + a / xn);
        // 更新 xn 为 xn1，用于下一次迭代判断
        xn = xn1;
        // 再次计算新的 xn1，用于判断精度
        xn1 = 0.5 * (xn + a / xn);
    } while (fabs(xn1 - xn) >= 1e-5); // 当精度未达到 10^-5 时继续迭代

    // 输出结果，保留足够小数位
    cout << "a 的平方根为：" << fixed << setprecision(6) << xn1 << endl;

    return 0;
}