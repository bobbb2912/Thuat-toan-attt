#include<iostream>
#include<cmath>
using namespace std;


int TimCanB2(int a, int n)
{

	int i = 0;
	while(i < n)
	{
		if((int)pow(i, 2)%n == a)
			cout << i << "  ";
		i++;
	}
}

int main()
{
	int a, b; // x^3 + ax +b = y^2
	cout << "Nhap he so cua x: "; cin >> a;
	cout << "Nhap he so b: "; cin >> b;
	int Zp;
	cout << "Nhap Zp: "; cin >> Zp;
	for(int i = 0; i < Zp; i++)
	{
		cout << i << "-";
		TimCanB2((int)(pow(i, 3) + a*i + b)%Zp, Zp);
		cout << "\n";
	}
}
