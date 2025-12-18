#include <iostream>
#include <cstdlib>
using namespace std;

int calculateGCD(int a, int b) {
    a = abs(a);
    b = abs(b);

    while (b != 0) {
        int remainder = a % b;
        a = b;
        b = remainder;
    }
    return a;
}

void calculateGCDandLCM(int a, int b, int& gcd_res, int& lcm_res) {
    int original_a = a;
    int original_b = b;

    a = abs(a);
    b = abs(b);
    while (b != 0) {
        int remainder = a % b;
        a = b;
        b = remainder;
    }
    gcd_res = a;

    if (gcd_res == 0) {
        lcm_res = 0;
    }
    else {
        lcm_res = (original_a / gcd_res) * original_b;
    }
}

int main() {
    int m, n;

    cout << "请输入第一个自然数m：";
    cin >> m;
    cout << "请输入第二个自然数n：";
    cin >> n;

    int gcd_only = calculateGCD(m, n);
    cout << "\n（1）" << m << " 和 " << n << " 的最大公约数是：" << gcd_only << endl;

    int gcd_result, lcm_result;
    calculateGCDandLCM(m, n, gcd_result, lcm_result);
    cout << "（2）" << m << " 和 " << n << " 的最大公约数是：" << gcd_result << endl;
    cout << "    " << m << " 和 " << n << " 的最小公倍数是：" << lcm_result << endl;

    return 0;
}