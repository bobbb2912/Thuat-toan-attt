#include<iostream>
using namespace std;

int x[31], t[31], n;
void khoitao()
{
	cout << "Nhap n: " << endl;
	cin >> n;
	x[0] = 1;
	t[0] = 0;
}

void xuat(int k)
{
	cout << n << " = ";
	for(int i = 1; i < k; i++)
		cout << x[i] << " ";
	cout << x[k] << " " << endl;
}

void phanTich(int i)
{
	for(int j = x[i-1]; j <= ((n-t[i-1])/2); j++)
	{
		x[i] = j;
		t[i] = t[i-1] + j;
		phanTich(i+1);
	}
	x[i] = n-t[i-1];
	xuat(i);
}

int main()
{
	khoitao();
	phanTich(1);
	
	return 0;
}
