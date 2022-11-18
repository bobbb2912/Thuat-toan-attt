#include<iostream>
#include<cmath> 
using namespace std;
void swap(int a, int b)
{
	int tmp;
	tmp = a;
	a = b; 
	b = tmp;
}
int main()
{
	int i, j;
	int S[50], u, size;
	int K;
	cout  << "Nhap so phan tu cua mang S: "; cin >> size;
	cout << "Nhap cac phan tu cua mang S: "; 
	for(int i = 0; i < size; i++)
	{
		cin >> S[i];
	}
	i = j = 0;
//	do
//	{
		i = (i+1)%256;
		j = (j + S[i])%256;
		swap(S[i], S[j]);
		u = S[(S[i]+S[j])%256];
		K = S[u];
//	}
	cout << "K = " << K;
 } 
