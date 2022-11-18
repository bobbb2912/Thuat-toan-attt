#include <iostream>
#include<cmath>
using namespace std;

int squareAndMulti(int a, int k, int n) //a^k mod n
{
	int r;
	int bin[32];
	int i = 0;
	r = a;
	while(k>0)
	{
		if(k%2 == 0)
			bin[i] = 0;
		else
			bin[i] = 1;
		k/=2;
		i++;
	}
	i--;
	for(i; i >= 0; i--)
	{
		r = (r*r)%n;
		if(bin[i] == 1) r = (r*a)%n;
	}
	
	return r;
}

int main()
{
	int a, k, n;
	cin >> a >> k >> n;
	cout << squareAndMulti(a, k, n);
	return 0;
}
