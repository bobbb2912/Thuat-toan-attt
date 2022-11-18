#include<iostream>
using namespace std;


void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void xuat(int n, int K[])
{
	for(int i = 0; i < n; i++)
	{
		cout << K[i] <<" ";
	}
}


void buble_sort(int K[], int n)
{
	for(int i = 0; i < n; i++)
	{
		for(int j = n-1; j > i; j--)
		{
			if(K[j] < K[j-1])
			{
				swap(K[j], K[j-1]);
			}
		}
	}
}

int main()
{
	int n, a[50];
	cout << "Nhap so phan tu: "; cin >> n;
	for(int i = 0; i < n; i++)
	{
		cout << "a[" << i << "] = "; cin >> a[i];
	}
	
	buble_sort(a, n);
	xuat(n, a);
	return 0;
}
