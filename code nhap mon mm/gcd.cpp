#include<iostream>
using namespace std;
// euclid tim ucln ( greatest common divisor)
int gcd(int a, int b)
{
	int tmp;
	while(b > 0)
	{
		tmp = a%b;
		a = b; b = tmp;
	}
	return a;
} 

int main()
{
	int a, b;
	a = b = 0;
	while(a <= 0 || b <= 0)
	{
		cout << "Nhap a > 0: "; cin >> a;
		cout << "Nhap b > 0: "; cin >> b;
	}
//	cin >> a >> b;
	cout <<"gcd(" << a << "," << b << ") = " << gcd(a, b);
	return 0;
}
