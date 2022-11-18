#include<iostream>
using namespace std;

void swap(int &xp, int &yp)
{
    int temp = xp;
    xp = yp;
    yp = temp;
}

void selection_sort(int K[], int n)
 // chon phan tu nho nhat trong day chuyen ve dau
{
	for(int i = 0; i < n-1; i++)
	{
		int m = i;
		for(int j = i+1; j < n; j++)
		{
			if(K[j] < K[m])
				m = j;
		}
		if(i < m) // doi cho K[i] va K[m]
		{
			int x = K[i];
			K[i] = K[m];
			K[m] = x;
		}
		
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
	
	selection_sort(K, n);
	xuat(n, K);
	return 0;
}
