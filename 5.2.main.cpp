#include "student.h"  // 包含类声明头文件

int main()
{
    Student stud;  // 定义对象
    // 调用set_value为stud对象赋初值
    stud.set_value(7, "tcg", 'm');
    // 输出stud对象的信息
    stud.display();

    // 额外测试：定义第二个对象并赋值
    Student stud1;
    stud1.set_value(8, "zhangsan", 'f');
    cout << "-----------------" << endl;
    stud1.display();

    return 0;
}
