#include<iostream>
using namespace std;
int main()
{
	float x = 0.5;float y = 0;
	while (x>0&&x<10)
	{
		
		cout << "请输入x(0<x<10)的值:" << endl;
		cin >> x;
		if (x>0&&x<1) { cout << "y=" << 3 - (2.0 * x) << endl; }
		else if (x>=1&&x<5) { cout << "y=" << 2.0/ 4.0 * x + 1 << endl; }
		else if (x>=5&&x<10) { cout << "y=" << x * x << endl; }
		else cout << "请注意0 < x < 10!!!" << endl;
	}


	system("pause");
	return 0;
}