#include<iostream>
#include<cmath>
using namespace std;

int v[50];
int modInverse(int a, int p) // a^-1 mod p
{
	int u, v;
	int x1 = 1, x2 = 0;
	u = a; v = p;
	while(u != 1)
	{
		int q = v/u;
		int r = v-q*u;
		int x = x2 - q*x1;
		v = u;
		u = r; 
		x2 = x1;
		x1 = x;
	}
	int modulo = x1%p;
	if(modulo < 0) modulo+=p; 
	return (modulo);
}

void xepBaLo_DST(int n, int M[], int S ) // xep balo day sieu tang
{
//	static int v[50];
//	cout << "Nhap kich thuoc mang M: "; cin >> n;
//	cout << "Nhap cac phan tu cua mang: ";
//	for(int i = 0; i < n; i++)
//	{
//		cin >> M[i];
//	}
//	cout << "Nhap S: "; cin >> S;
	int i = n-1;
	int size = -1;
	int check = 0;
	int S_check = S;
	while(i >= 0)
	{
		if(S >= M[i])
		{
			v[i] = 1;
			S -= M[i];
			size++;
		}
		else v[i] = 0;
		i = i-1;
	}
//	for(int i = 0; i < n; i++)
//	{
//		if(v[i] == 1)
//			check += M[i];
//	}
//	if(check == S_check)
//	{
//		return v;
//	}
//	else return -1;
	
	
}


int main()
{
	int m[50], size;
	int W, M;
	cout << "Nhap so phan tu cua day sieu tang: "; cin >> size;
	cout << "Nhap day sieu tang: ";
	for(int i = 0; i < size; i++)
	{
		cin >> m[i];
	}
	
	cout << "Nhap so modulo M: "; cin >> M;
	cout << "Nhap KBM W: "; cin >> W;
	
	//
	int a[50];
	for(int i = 0; i < size; i++)
	{
		a[i] = (W*m[i])%M;
	}
	cout << "day KCK a la: ";
	for(int i = 0; i < size; i++)
	{
		cout << a[i] << " ";
	}
	int x[50], y;
	// ma hoa
	int sizeX;
	cout << "Nhap so phan tu cua ban ro: "; cin >> sizeX;
	cout << "Nhap day bit cua ban ro: ";
	for(int i = 0; i < sizeX; i++)
	{
		cin >> x[i];
	}
	y = 0;
	cout << "Ban ma la: ";
	for(int i = 0; i < sizeX; i++)
	{
		y += x[i] * a[i];
	}
	cout << y << endl;
	// giai ma
	int d;
	cout << "Nhap ban ma y: "; cin >> y;
	d = (modInverse(W,M)*y)%M;
//	int v[50];
	xepBaLo_DST(size, m, d);
	for(int i = 0; i < size; i++)
	{
		cout << v[i] << " " ;
	}
	
}
