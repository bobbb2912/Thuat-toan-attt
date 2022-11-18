#include<iostream>
#include<cmath>
using namespace std;

int d;
#define N 50 

int *chuyeNhiPhan(int k)
{
	static int bin[N];
	int i = 0;
	while(k > 0)
	{
		if(k%2 == 0) bin[i] = 0;
		else bin[i] = 1;
		i++;
		k /= 2;
	}
	d = i-1;
	return bin;
}

int binhPhuongCoLap(int a, int k, int n)
{
	int b = 1;
	int A = a;
	int *bin = chuyeNhiPhan(k);
	if(k == 0) return b;
	if(bin[0] == 1) b = a;
	for(int i = 1; i <= d; i++)
	{
		A = (A*A)%n;
		if(bin[i] == 1) b = (b*A)%n;
	}
	return b;
}

int gcd(int a, int b)
{
	while(b > 0)
	{
		int r = a%b;
		a = b; b = r;
	}
	return a;
}

bool camicheal(int n)
{
	for(int i = 2; i < n; i++)
	{
		if(gcd(i, n) == 1)
		{
			if(binhPhuongCoLap(i, n-1, n) != 1)
			{
				return false;
			}
		}
	}
	return true;
}

int main()
{
	int n;
	cin >> n;
	if(camicheal(n) == false) cout << "khong la gia nguyen to";
	else cout << "so gia nguyen to";
	
	return 0;
}
