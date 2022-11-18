#include<iostream>
#include<cmath>
using namespace std;

#define N 50
int p, w, a, b;

void nhap()
{
	cout << "nhap p: ";
	cin >> p;
	cout << "nhap w: ";
	cin >> w;
	cout << "nhap a: ";
	cin >> a;
	cout << "nhap b: ";
	cin >> b;
	
}

int tinh_t()
{
	int m, t;
	m = (log2(p)) + 1;
	t = (m/w + 1); 
//	for(int i = (t-1); i >= 0; i--)
//	{
//		uoc = (a/pow(2, i*w));
//		a -= (pow(2, i*w)*uoc);
//	//	cout << "a[" <<i<< "] = " << uoc <<  endl;
//	}
	return t;
}


void truChinhXacBoi()
{
	int uoc, t, e = 0;
	int f[N], g[N], c[N];
	t = tinh_t();
	// chuyen mang 
	for(int i = (t-1); i >= 0; i--)
	{
		uoc = a/int(pow(2, i*w));
		a = a - (pow(2, i*w)*uoc);
		f[i] = uoc;
	}
	
	for(int i = (t-1); i >= 0; i--)
	{
		uoc = (b/int(pow(2, i*w)));
		b = b - (pow(2, i*w)*uoc);
		g[i] = uoc;	
	}
	
	//thuc hien tru
	for(int i = 0; i <= t-1; i++)
	{
		int sub;
		sub = f[i] - g[i] - e;
		c[i] = sub%int(pow(2, w));
		if(sub >= pow(2, w) || sub < 0) 
		{
			e = 1;
			if(sub < 0)
				c[i] += pow(2, w);
		}
		else e = 0;
		cout << "c[" << i << "] = " << c[i] << ", e = " << e << endl;
	}
}


int main()
{
	//p=2147483647
	nhap();
	truChinhXacBoi();
	
	return 0;
	
}
