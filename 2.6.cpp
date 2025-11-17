#include <iostream>
using namespace std;

// 函数：用欧几里得算法求最大公约数（GCD）
int gcd(int a, int b) {
    // 核心逻辑：用较大数对较小数取余，循环至余数为0，此时除数即为GCD
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a, b;
    // 提示输入并读取两个正整数
    cout << "请输入两个正整数（用空格分隔）：";
    cin >> a >> b;

    // 输入合法性判断：确保输入为正整数
    if (a <= 0 || b <= 0) {
        cout << "错误：请输入正整数！" << endl;
        return 1; // 异常退出程序
    }

    // 计算最大公约数和最小公倍数
    int gcd_result = gcd(a, b);
    // 公式：LCM(a,b) = (a*b) / GCD(a,b)，先乘后除需注意整数溢出（此处默认输入范围适中）
    int lcm_result = (a * b) / gcd_result;

    // 输出结果
    cout << "最大公约数（GCD）：" << gcd_result << endl;
    cout << "最小公倍数（LCM）：" << lcm_result << endl;

    return 0;
}