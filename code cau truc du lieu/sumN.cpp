#include<iostream>
using namespace std;

float sumN(float n)
{
	if(n == 1) return 1;
	return (1.0/n) + sumN(n-1);
}

int main()
{
	float n;
	cout << "Enter n: ";
	cin >> n;
	cout << sumN(n);
	return 0;
}
