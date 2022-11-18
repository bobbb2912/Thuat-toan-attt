#include<iostream>
#include<ctime>
#include<cstdlib>
#include<cmath>
using namespace std;
#define N 50
int d;

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

int binhPhuongCoLap(int a, int k, int n) //a^k modn = b
{
	int *bin = chuyenNhiPhan(k);
	int b = 1;
	int A = a;
	if(k == 0) return b;
	if(bin[0] == 1)  b = a;
	for(int i = 1; i <= d; i++)
	{
		A = (A*A)%n;
		if(bin[i] == 1) b = (b*A)%n;
	}
	return b;
}


int Miller_Rabin(int n, float p)
{
	int s, r;
	s = 0;
	int mark = n-1;
	while(mark%2 == 0)
	{
		s++;
		mark/=2;
	}
	r = mark; 
	int t = ceil( ((log(1-p)) / float(log(0.25))) );
//	cout << t;
	while(t > 0)
	{
		int a, y;
		
		a = 2 +rand()%(n-2);
		y = binhPhuongCoLap(a, r, n);
		
		if(y != 1 && y != (n-1))
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
		t--;
	}
	return true;
}

int main()
{
	int n;
	float p;
	n = p = -1;
	while(n <= 2)
	{
		cout << "Nhap n(n<2): "; cin >> n;
	}
	while(p < 0 || p > 1)
	{
		cout << "Nhap p(0 <= p <= 1): "; cin >> p;
	}


	if(n == 2) cout << "nguyen to\n";
	else
	{
		if(Miller_Rabin(n, p) == false) cout << "hop so\n";
		else cout << "nguyen to\n";
	}

	
}
