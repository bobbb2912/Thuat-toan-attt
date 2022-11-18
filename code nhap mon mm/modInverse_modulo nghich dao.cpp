#include<iostream>
using namespace std;

//thuat toan modulo nghich dao
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
	int a, p;
	cout<< "a = "; 
	cin >> a;
	cout << "p = ";
	cin >> p;
	cout << modInverse(a, p);
}
