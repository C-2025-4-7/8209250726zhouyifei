#include <iostream>
#include <cstring>
using namespace std;

int indexof(const char *s1, const char *s2) {
    int len1 = strlen(s1);
    int len2 = strlen(s2);
    
    if (len1 == 0 || len1 > len2) {
        return -1;
    }
    
    for (int i = 0; i <= len2 - len1; ++i) {
        int j;
        for (j = 0; j < len1; ++j) {
            if (s2[i + j] != s1[j]) {
                break;
            }
        }
        if (j == len1) {
            return i;
        }
    }
    return -1;
}

int main() {
    char s1[100], s2[100];
    cout << "请输入子串s1：";
    cin >> s1;
    cout << "请输入字符串s2：";
    cin >> s2;
    
    int pos = indexof(s1, s2);
    if (pos != -1) {
        cout << "s1是s2的子串，首次匹配下标为：" << pos << endl;
    } else {
        cout << "s1不是s2的子串" << endl;
    }
    
    return 0;
}
