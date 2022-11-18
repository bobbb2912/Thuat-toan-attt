//Nguyen Thi Hien _ AT160319_cau 40
#include<iostream>
#include<cmath>
#include<ctime>
#include<cstdlib>
using namespace std;
#define N 50
int size;
int  d;

int *chuyenNhiPhan(int k)
{
	static int bin[N];
	int i = 0;

	while(k>0)
	{
		if(k%2 == 0) bin[i] = 0;
		else bin[i] = 1;
		k/=2;
		i++;
	}
	d = i-1;
	return bin;
}
int binhPhuongCoLap(int a, int k, int n) //a^k mod n = b
{
	int *bin = chuyenNhiPhan(k);
	int b = 1;
	if(k == 0) return b;
	int A = a;
	if(bin[0] == 1) b = a;
	for(int i = 1; i <= d; i++)
	{
		A = (A*A)%n;
		if(bin[i] == 1) 
			b = (A*b)%n;
	}
	return b;
} 

bool Fermat(int n, int t)
{
	if(n < 2) return false;
	if(n==2) return false;
	for(int i = 1; i <= t; i++)
	{
		long long a;
		a = 2 + rand()% (n-2);
		long long r;
		r = binhPhuongCoLap(a, n-1, n);
		if(r!=1) return false;
	}
	if(n < 2) return false;
	return true;
}

int  *nhap()
{
	cout << "Nhap kich thuoc mang: "; cin >> size;
	cout << "Nhap mang: ";
	int arr[100];
	for(int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}
	return arr;
}

int euclid(int a, int b) //tim UCLN
{
	while(b > 0)
	{
		int r = a%b;
		a = b; b= r;
	}
	return a;
}

bool prime(int n)
{
	for(int i = 2; i <= sqrt(n); i++)
	{
		if(n%i == 0 && i!=n) return false;
	}
	return true;
	
}
int dem()
{
	int count;
	int *arr = nhap();
	for(int i = 0; i< size; i++)
	{
		for(int j = 0; j < size; j++)
		{
			if(Fermat(euclid(arr[i], arr[j]), 5) == true)
			{
				cout <<arr[i] << " " << arr[j] << " " << euclid(arr[i], arr[j])<< endl;
				count++;
			}
		}
	
	}
	if(count == 0) cout << "khong co cap nao!";
	else cout << endl << "co " << count << " cap (i, j) trong mang ma uoc chung lon nhat la mot so nguyen to";
}

int main()
{
	dem();
	return 0;
}
