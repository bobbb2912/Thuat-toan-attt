#include<iostream>
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
	int a, k, n;
	cin >> a >> k >> n;
	cout << squareMulti(a, k, n);
	return 0;
}
