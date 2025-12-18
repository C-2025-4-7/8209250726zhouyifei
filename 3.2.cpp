#include <iostream>
#include <iomanip>
using namespace std;

bool is_prime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int count = 0;
    int num = 2;
    while (count < 200) {
        if (is_prime(num)) {
            cout << setw(5) << num;
            count++;
            if (count % 10 == 0) {
                cout << endl;
            }
        }
        num++;
    }
    return 0;
}
