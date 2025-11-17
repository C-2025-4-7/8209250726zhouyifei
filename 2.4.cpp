#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    char op;
    cout << "请输入表达式（格式：数字 运算符 数字，如 5+3）：";
    cin >> num1 >> op >> num2;

    switch (op) {
    case '+':
        cout << "结果：" << num1 + num2 << endl;
        break;
    case '-':
        cout << "结果：" << num1 - num2 << endl;
        break;
    case '*':
        cout << "结果：" << num1 * num2 << endl;
        break;
    case '/':
        if (num2 == 0) {
            cout << "错误：除数不能为0" << endl;
        }
        else {
            cout << "结果：" << num1 / num2 << endl;
        }
        break;
    case '%':
        if (num2 == 0) {
            cout << "错误：除数不能为0" << endl;
        }
        else {
            cout << "结果：" << num1 % num2 << endl;
        }
        break;
    default:
        cout << "错误：非法运算符" << endl;
    }

    return 0;
}