#include<iostream>
using namespace std;
// dinh ly phan du trung hoa
// x = a1 mod n1, x = a2 mod n2 ,...
// gcd(ni, nj) = 1 voi moi i != j.
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

int main()
{
	int a[10], mod[10];
	int size;
	cout << "co so phuong trinh la: "; cin >> size;
	cout << "Nhap a: ";
	for(int i = 0; i < size; i++)
	{
		cin >> a[i];
	}
	
	cout << "Nhap mod: ";
	for(int i = 0; i < size; i++)
	{
		cin >> mod[i];
	}
	
	int N, M[10], n[10];
	N = 1;
	for(int i = 0; i < size; i++)
	{
		N *= mod[i]; 
	}

	for(int i = 0; i < size; i++)
	{

		n[i] = N/mod[i];
		M[i] = modInverse(n[i], mod[i]);
	

	// 3 10 19 20 11 21 26
	
	int x = 0;

	for(int i = 0; i < size; i++)
	{
		x += (a[i]*n[i]*M[i]);
	}
	cout << "x =  " << x%N << " mod " << N;
	
	return 0;
}














