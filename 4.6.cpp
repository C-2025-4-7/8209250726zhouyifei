#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

void count(const char s[], int counts[]) {
    int len = strlen(s);
    for (int i = 0; i < len; ++i) {
        if (isalpha(s[i])) {
            char lower = tolower(s[i]);
            int index = lower - 'a';
            counts[index]++;
        }
    }
}

int main() {
    char s[100];
    int counts[26] = {0};
    
    cout << "请输入一个字符串：";
    cin.getline(s, 100);
    
    count(s, counts);
    
    cout << "字母出现的次数（非零）：" << endl;
    for (int i = 0; i < 26; ++i) {
        if (counts[i] > 0) {
            cout << (char)('a' + i) << ": " << counts[i] << endl;
        }
    }
    
    return 0;
}
