#include<iostream>
#include<cmath>
using namespace std;
// he mat RSA

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


int main()
{
	int p, q, e, m;
	cout << "nhap 2 so p, q: "; cin >> p >> q;
	cout << "Nhap e: "; cin >> e;
	cout << "Nhap ban ro m: "; cin >> m;
	int n = p*q;
	int phi = (p-1)*(q-1);
	int d; // d = e^-1 mod n
	d = modInverse(e, phi);
	// ma hoa
	int cipher;
	cipher = squareMulti(m, e, n);
	cout << "Ban ma la: " << cipher << endl;
	// giai ma
	int plaintxt;
	plaintxt = squareMulti(m, d, n);
	cout << "Ban ro la: " << plaintxt;
	// diem bat dong
	int N = (1+gcd(e-1, p-1))*(1+gcd(d-1, q-1));
	cout << "\nSo diem bat dong la: " << N << endl;
	for(int i = 0; i < n; i++)
	{
		if(squareMulti(i, e, n) == i)
		{
			cout << i << " ";
		}
	}
	
}
