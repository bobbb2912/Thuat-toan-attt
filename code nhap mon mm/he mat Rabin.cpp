#include<iostream>
#include<cmath>
using namespace std;

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
	int p, q, m;
	cout << "nhap 2 so p, q: "; cin >> p >> q;
	cout << "Nhap ban ro(ban ma) m: "; cin >> m;
	int n = p*q;	
	// ma hoa
	int cipher;
	cipher = squareMulti(m, 2, n);
	cout << "Ban ma la: " << cipher << endl;
	// giai ma: can bac 2 cua y
	cout << "Ban ro la: " << endl;
	int i = 0;
	while(i < n)
	{
		if((int)pow(i, 2)%n == m)
			cout << i << "  ";
		i++;
	} 
}
