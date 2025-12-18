#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int parseHex(const char *const hexString) {
    int decimal = 0;
    int len = strlen(hexString);
    for (int i = 0; i < len; ++i) {
        char c = toupper(hexString[i]);
        int val;
        if (c >= '0' && c <= '9') {
            val = c - '0';
        } else if (c >= 'A' && c <= 'F') {
            val = 10 + (c - 'A');
        } else {
            return 0;
        }
        decimal = decimal * 16 + val;
    }
    return decimal;
}

int main() {
    char hexStr[20];
    cout << "请输入一个16进制字符串：";
    cin >> hexStr;
    
    int decNum = parseHex(hexStr);
    cout << "转换后的十进制数为：" << decNum << endl;
    
    return 0;
}
