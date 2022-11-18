#include<iostream>
#include<cmath>
using namespace std;

float sumN(int n)
{
	float sum = 0;
	while(n >= 1)
	{
		sum += 1.0/n;
		n--;
	}
	return sum;
 } 
 
 int main()
 {
 	int n;
 	cout << "Nhap n: "; cin >> n;
 	
 	cout << sumN(n);
 	return 0;
 }
