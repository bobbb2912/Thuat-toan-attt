#include<iostream>
#include<cmath>
using namespace std;

int p, w, a;
int nhap()
{
	cout << "nhap p: ";
	cin >> p;
	cout << "nhap w: ";
	cin >> w;
	cout << "nhap a: ";
	cin >> a;
}

void tinh_a()
{
	float m, t;
	int uoc;
	m = (log2(p)) + 1;
	t = (m/w + 1); 
	for(int i = (t-1); i >= 0; i--)
	{
		uoc = (a/pow(2, i*w));
		a -= (pow(2, i*w)*uoc);
		cout << "a[" <<i<< "] = " << uoc <<  endl;
	}
}

int main()
{

	nhap();
	
	tinh_a();
	return 0;
	
}
