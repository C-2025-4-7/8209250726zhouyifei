// 防止头文件重复包含（必备，否则多文件编译会报错）
#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
// 修正：使用string更安全，避免char数组越界；若坚持用char数组，需注意初始化方式
#include <string>
using namespace std;

class Student
{
public:
    // 公用成员函数原型声明
    void display();
    // 新增：为数据成员赋初值的set_value函数
    void set_value(int n, const string& nm, char s);
private:
    int num;
    // 修正：将char name[20]改为string name，更易操作且避免数组越界
    string name;
    char sex.
};

#endif // STUDENT_H
