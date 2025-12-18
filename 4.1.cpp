#include <iostream>
using namespace std;

int main() {
    int nums[10];
    int unique[10];
    int uniqueCount = 0;
    
    cout << "请输入10个整数：" << endl;
    for (int i = 0; i < 10; ++i) {
        cin >> nums[i];
        bool isNew = true;
        for (int j = 0; j < uniqueCount; ++j) {
            if (nums[i] == unique[j]) {
                isNew = false;
                break;
            }
        }
        if (isNew) {
            unique[uniqueCount] = nums[i];
            uniqueCount++;
        }
    }
    
    cout << "其中不同的数为：" << endl;
    for (int i = 0; i < uniqueCount; ++i) {
        cout << unique[i] << " ";
    }
    cout << endl;
    
    return 0;
}
