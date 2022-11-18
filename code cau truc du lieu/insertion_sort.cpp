#include<iostream>
using namespace std;

void insertion_sort(int K[], int n)
{
	for(int i = 1; i < n; i++)
	{
		int  x = K[i];
		int j = i-1;
		while((K[j] > x) && (j >= 0)) 
		{
			K[j+1] = K[j];
			j--;
		}
		K[j+1] = x;
	}
}

void xuat(int n, int K[])
{
	for(int i = 0; i < n; i++)
	{
		cout << K[i] <<" ";
	}
}

int main()
{
	int n, K[50];
	cout << "Nhap so phan tu: "; cin >> n;
	for(int i = 0; i < n; i++)
	{
		cout << "K[" << i << "] = "; cin >> K[i];
	}
	
	insertion_sort(K, n);
	xuat(n, K);
	return 0;
}
