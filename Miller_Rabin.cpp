#include<iostream>
#include<ctime>
#include<cstdlib>
#include<cmath>
using namespace std;

#define N 50
int  d;

int *chuyenNhiPhan(int k)
{
	static int bin[N];
	int i = 0;

	while(k>0)
	{
		if(k%2 == 0) bin[i] = 0;
		else bin[i] = 1;
		k/=2;
		i++;
	}
	d = i-1;
	return bin;
}
int binhPhuongCoLap(int a, int k, int n) //a^k mod n = b
{
	int *bin = chuyenNhiPhan(k);
	int b = 1;
	if(k == 0) return b;
	int A = a;
	if(bin[0] == 1) b = a;
	for(int i = 1; i <= d; i++)
	{
		A = (A*A)%n;
		if(bin[i] == 1) 
			b = (A*b)%n;
	}
	return b;
} 

bool Miller_Rabin(int n, int t) 
{
	int  r, y, s;
	int a; 
	int mark = n-1;
	s = 0;
	// phan tich n-1 = 2^s.r
	while(mark%2 == 0)
	{
		s++;
		mark/=2;
	}
	r = mark;
	
	for(int i = 0; i < t; i++)
	{
	
		a = 2 + rand()%(n-2);
		y = binhPhuongCoLap(a, r, n);
		if(y!=1 && y!=(n-1))
		{
			int j = 1;
			while(j <= (s-1) && y != (n-1))
			{
				y = (y*y)%n;
				if(y == 1) return false;
				j++;
			}
			if(y != (n-1)) return false;
		}
	}
	return true;
}

int main()
{
	int n, t;

	cin >> n >> t;
	if(n<2) cout << "nhap n > 2.";
	else
	{
		if(n == 2) cout << "nguyen to";
		else
		{
			if(Miller_Rabin(n, t) == 1) cout << "nguyen to";
			else cout << "hop so";
		}
	}

	return 0;
}
