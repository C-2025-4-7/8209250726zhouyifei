#include<iostream>
using namespace std;

// 定义长方柱类
class Cuboid {
private:
    // 私有数据成员：长、宽、高
    double length;
    double width;
    double height;

public:
    // 1. 成员函数：输入长方柱的长、宽、高
    void inputData() {
        cout << "请输入长方柱的长：";
        cin >> length;
        cout << "请输入长方柱的宽：";
        cin >> width;
        cout << "请输入长方柱的高：";
        cin >> height;
        
        // 简单数据校验：避免输入非正数
        if (length <= 0 || width <= 0 || height <= 0) {
            cout << "警告：长、宽、高必须为正数！已自动修正为1" << endl;
            length = (length <= 0) ? 1 : length;
            width = (width <= 0) ? 1 : width;
            height = (height <= 0) ? 1 : height;
        }
    }

    // 2. 成员函数：计算体积（返回体积值）
    double calculateVolume() {
        // 体积公式：长 × 宽 × 高
        return length * width * height;
    }

    // 3. 成员函数：输出体积（可直接调用计算函数）
    void outputVolume(int index) {
        cout << "第" << index << "个长方柱的体积为：" << calculateVolume() << endl;
    }
};

int main() {
    // 定义3个长方柱对象
    Cuboid cuboid1, cuboid2, cuboid3;

    // 输入3个长方柱的参数
    cout << "===== 输入第1个长方柱的参数 =====" << endl;
    cuboid1.inputData();
    cout << "\n===== 输入第2个长方柱的参数 =====" << endl;
    cuboid2.inputData();
    cout << "\n===== 输入第3个长方柱的参数 =====" << endl;
    cuboid3.inputData();

    // 输出3个长方柱的体积
    cout << "\n===== 长方柱体积计算结果 =====" << endl;
    cuboid1.outputVolume(1);
    cuboid2.outputVolume(2);
    cuboid3.outputVolume(3);

    return 0;
}
