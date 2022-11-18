#include<iostream>
#include<cmath>
using namespace std;

#define N 50
long long p, w, a, b;
long long U, V, u[N], v[N];

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
	float m, t;
	m = ceil(log2(p));
	t = ceil(m/w); //cout << m << endl << t <<endl;
 
//	for(int i = (t-1); i >= 0; i--)
//	{
//		uoc = (a/pow(2, i*w));
//		a -= (pow(2, i*w)*uoc);
//	//	cout << "a[" <<i<< "] = " << uoc <<  endl;
//	}
	return t;
}

int chuyenNhiPhan(int  k)
{
//	long long u[N], v[N];
//	int U, V;
	long long uoc;
	
	for(int i = 2*w-1; i >= 0; i--)
	{
		u[i] = v[i] = 0;
		//mang u
		if(i>=w)
		{
			if(k >= pow(2, i))
			{
				u[i] = 1;
				uoc = k/pow(2, i);
				k -= uoc*pow(2, i);
			}	
			else u[i] = 0;
		}
		//mang v
		if(i<w)
		{
			if(k >= pow(2, i))
			{
				v[i] = 1;
				uoc = k/pow(2, i);
				k -= uoc*pow(2, i);
			}	
			else v[i] = 0;
		}
	}
	//tinh U, V
	U = V = 0;
	for(int i = 2*w-1; i >= w; i--)
	{
		if(u[i] == 1)
			U += pow(2, i-w);
	
	}//	cout << U << "\t";
	for(int i = w-1; i >= 0; i--)
	{
		if(v[i] == 1)
			V+= pow(2, i);
			
	}//cout << V << endl;
	
//	return U, V;
}

void nhanSoLon()
{
//	int U, V;
//	int u[N], v[N];
	int uoc, t, e = 0;
	int f[N], g[N], c[N];
	t = tinh_t();
	//chuyen mang
	for(int i = (t-1); i >= 0; i--)
	{
		uoc = a/(pow(2, i*w));
		a = a - (pow(2, i*w)*uoc);
		f[i] = uoc;
//		cout<<f[i]<<"\t";
	}
	cout<<endl;
	for(int i = (t-1); i >= 0; i--)
	{
		uoc = (b/(pow(2, i*w)));
		b = b - (pow(2, i*w)*uoc);
		g[i] = uoc;	
//		cout<<g[i]<<"\t";
	}
	cout<<endl;
	//nhan
	for(int i = 0; i  <= t-1; i ++)
	{
		long long  k;
		c[i] = 0;
		for(int i = 0; i <= t-1; i++)
		{
			U = 0;
			for(int j = 0; j <= t-1; j++)
			{
				if(i == 0) c[j] = 0;
				k = c[i+j] + f[i]*g[j] + U;
				chuyenNhiPhan(k);	
				c[i+j] = V;
			}	
			c[i+t] = U;
		}
	}
	
	for(int i = 0; i < w; i++)
	{
		cout << "c[" << i << "] = " << c[i] <<  endl;
	}
}

int main()
{
	//p=2147483647
	// a=524647
	//b=32549
	nhap();
	nhanSoLon();
	
	return 0;
	
}
