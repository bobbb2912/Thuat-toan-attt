#include<iostream>
#include<cmath>
using namespace std;

int main()
{// kiem tra thang du bac hai cua a mod n
	int n, a;
	cout << "Nhap a: "; cin >> a;
	cout << "Nhap n: "; cin >> n;
	
	for(int i = 0; i < n; i++)
	{
		if((int)pow(i, 2)%n == a)
		{
			cout << i << "  ";
			 
		}
	}
}
