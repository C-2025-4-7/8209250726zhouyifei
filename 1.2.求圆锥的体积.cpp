#include<iostream>
using namespace std;
int main()
{
	const float pi = 3.1415927;float r = 0;float h = 0;
	cout << "请输入圆锥底的半径:" << endl;
	cin >>r;
	cout << "请输入圆锥的高:" << endl;
	cin >> h;
	cout << "圆锥的体积为:" << pi * r * r * h / 3 << endl;

	system("pause");
		return 0;

}