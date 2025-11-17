#include <iostream>
#include <iomanip>  
using namespace std;

int main() {
    
    double fahrenheit, celsius;

   
    cout << "请输入华氏温度（°F）：";

   
    if (!(cin >> fahrenheit)) {
        cout << "错误：输入的不是有效数字！" << endl;
        return 1; 
    }

  
    celsius = (fahrenheit - 32) * 5.0 / 9.0;  

    cout << fixed << setprecision(2);  
    cout << "对应的摄氏温度（°C）：" << celsius << endl;

    return 0;
}