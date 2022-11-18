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

void quickSort(int a[], int left, int right)
{
	int x, i, j;
	x = a[(left+right)/2];
	i = left;
	j = right;
	do
	{
		while(a[i] < x) i++;
		while(a[j] > x) j--;
		
		if(i <= j)
		{
			swap(a[i], a[j]);
			i++; j--;
		}
	}while(i <= j);
	
	if(left < j) quickSort(a, left, j);
	if(i < right) quickSort(a, i, right);
}

int main()
{
	int n, a[50];
	cout << "Nhap so phan tu: "; cin >> n;
	for(int i = 0; i < n; i++)
	{
		cout << "a[" << i << "] = "; cin >> a[i];
	}
	
	quickSort(a, 0, n-1);
	xuat(n, a);
	return 0;
}
