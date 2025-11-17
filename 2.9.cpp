#include <iostream>
#include <<iomanip>  // 用于设置输出精度
using namespace std;

int main() {
    const double price_per_apple = 0.8;  // 每个苹果0.8元（常量，不可修改）
    int daily_apples = 2;                // 第一天购买的苹果数
    double total_cost = 0.0;             // 总花费
    int day_count = 0;                   // 购买天数

    // 循环：每天买前天2倍，直到苹果数超过100时停止（取不超过100的最大值）
    while (daily_apples <= 100) {
        day_count++;  // 天数加1
        // 累加当天花费（苹果数 * 单价）
        total_cost += daily_apples * price_per_apple;
        // 计算下一天的苹果数（翻倍），用于下一轮循环判断
        int next_day_apples = daily_apples * 2;
        // 若下一天苹果数超过100，停止循环（当前天已是最后一天）
        if (next_day_apples > 100) {
            break;
        }
        // 更新为下一天的苹果数
        daily_apples = next_day_apples;
    }

    // 计算平均每天花费（总花费 / 天数）
    double avg_daily_cost = total_cost / day_count;

    // 输出结果：保留2位小数（符合货币显示习惯）
    cout << fixed << setprecision(2);
    cout << "购买总天数：" << day_count << " 天" << endl;
    cout << "购买苹果总花费：" << total_cost << " 元" << endl;
    cout << "每天平均花费：" << avg_daily_cost << " 元" << endl;

    return 0;
}