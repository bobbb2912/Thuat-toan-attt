#include<bits/stdc++.h>
using namespace std;
// cap cua nhom nhan Z*n
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
	int count= 0;
	int n;
	cout << "Nhap n: "; cin >> n;
	for(int i = 0; i<n; i++)
	{
		if(gcd(i, n)==1) count ++;
	}
	cout << count;
	
 } 
