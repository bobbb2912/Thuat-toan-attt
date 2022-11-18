#include<iostream>
#include<cmath>
using namespace std;

int main()
{
		/*cap cua phan tu : ord(a) la so nguyen duong nho nhat sao cho
		a^t = 1 mod n (t>0)
		ord(a) = t, t | phi(n)*/
		int a, n;
		cout << "Nhap a: "; cin >> a;
		cout << "Nhap n: "; cin >> n;
		int t = 1;
		while((int)pow(a, t++)%n != 1)
		{
		//	t++;
			cout << a << " " << t << " "<< endl;
			if((int)pow(a, t)%n == 1)
				cout << "cap cua phan tu " << a << " la: " << t << endl;
		
		}
		return 0;
}
