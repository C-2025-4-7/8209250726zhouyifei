#include "student.h"  // 包含类声明头文件

// 实现display函数
void Student::display()
{
    // 修正：中文引号改为英文引号，否则编译报错
    cout << "num：" << num << endl;
    cout << "name：" << name << endl;
    cout << "sex：" << sex << endl;
}

// 实现新增的set_value函数：为私有成员赋值
void Student::set_value(int n, const string& nm, char s)
{
    num = n;
    name = nm;
    sex = s;
}
