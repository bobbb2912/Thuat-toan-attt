#include<iostream>
#include<cmath>
using namespace std;

// Tim loga(b) tren Zn*, voi a la phan tu sinh cua Zn*
int squareMulti(int a, int k, int n) //a^k mod n = b
{
	int b =1;
	int A = a;
	while(k > 0)
	{
		if(k%2 == 1) b = (b*A)%n;
		A = (A*A)%n;
		k/=2;
	}
	return b;
} 

int modInverse(int a, int p) // a^-1 mod p
{
	int u, v;
	int x1 = 1, x2 = 0;
	u = a; v = p;
	while(u != 1)
	{
		int q = v/u;
		int r = v-q*u;
		int x = x2 - q*x1;
		v = u;
		u = r; 
		x2 = x1;
		x1 = x;
	}
	int modulo = x1%p;
	if(modulo < 0) modulo+=p; 
	return (modulo);
}

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
	int a, b, n;
	cout << "Nhap a: "; cin >> a;
	cout << "Nhap b: "; cin >> b;
	cout << "Nhap n: "; cin >> n;
	
	int m; // tim cap ord(a)
	int count = 0; 
	for(int i = 0; i<n; i++)
	{
		if(gcd(i, n)==1) count++;
	}
	m = round(sqrt(count));
	cout <<" m = " << m << endl; 
	int X[50], Y[50];
	// tim cap
	for(int j = 0; j < m; j++)
	{
		X[j] = squareMulti(a, j, n);
	}
	/////
	for(int i = 0; i < m; i++)
	{
		Y[i] = (b*squareMulti(squareMulti(modInverse(a, n), m, n), i, n))%n;
	}
	for(int i = 0; i < m; i++)
	{
		cout << X[i] <<" " << Y[i] << endl;
	}
	for(int j = 0; j < m; j++)
	{
		for(int i = 0; i < m; i++)
		{
			if(X[j] == Y[i])
			{
				cout << "log" << a << "(" << b << ") = " << m*i+j;
				break;
			}
		}
	}
	
}









