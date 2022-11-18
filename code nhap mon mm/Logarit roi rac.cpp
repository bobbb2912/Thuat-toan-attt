#include<iostream>
#include<cmath>
using namespace std;
//bai toan logarit roi rac
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
	int n;
	cout << "Nhap n: "; cin >> n;
	for(int i = 1; i < n-1; i++)
	{
		cout << i << " " << squareMulti(2, i, n) << endl;
	}
	// thu dap a gia tri cua x trong log2(x)
//	for(int i = 1; i < n-1; i++)
//	{
//		if(squareMulti(2, i, n) == 24)
//		cout << i ;
//	}
	
	return 0;
 } 
