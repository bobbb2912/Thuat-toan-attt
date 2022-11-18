#include<iostream>
#include<cmath>
using namespace std;
// he mat Rabin

int squareMulti(int a, int k, int n) //a^k mod n = b
{
	int b =1;
	int A = a;
	while(k > 0)
	{
		if(k%2 == 1) b = (b*A)%n;
		A = (A*A)%n;
		k/=2;
	}
	return b;
}

int main()
{
	int y1, y2, k,  p, a, alpha, beta, x;
	cout << "Nhap p: "; cin >> p;
	cout << "Nhap khoa bi mat a: "; cin >> a;
	cout << "Nhap phan tu sinh alpha: "; cin >> alpha;
	cout << "Nhap so ngau nhien k: "; cin >> k;
	cout << "Nhap ban ro(ban ma) x: "; cin >> x;
	// khoa cong khai
	beta = squareMulti(alpha, a, p);
	cout << "beta = " << beta;
	cout << "\nnKCK(p, alpha, beta): " << p << ", " << alpha << ", " << beta<< endl;
	// ma hoa
	y1 = squareMulti(alpha, k, p);
	y2 = (x*squareMulti(beta, k, p))%p;
	cout << "\nban ma la (y1, y2): " << y1 << ", " << y2 << endl;
	// giai ma
	cout << "ban ro la: " << (y2*squareMulti(y1, p-1-a, p))%p;
}
