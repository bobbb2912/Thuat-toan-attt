#include<iostream>
#include<cmath>
using namespace std;

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
int main()
{
	//phep cong tren E;
	int E[3];
	int P[3], Q[3];
	int x3, y3; // ket qua cua phep cong  tren E: P+Q = (x3, y3)
	int lamda;
	int p;
	cout << "thuc hien tren truong modulo: " ; cin >> p;
	// Ep(a, b)
	for(int i = 1; i <= 2; i++)
	{
		cout << "Nhap E[" << i << "]: "; cin >> E[i];
	}
	//P(x1, y1)
	for(int i = 1; i <= 2; i++)
	{
		cout << "Nhap P[" << i << "]: "; cin >> P[i];
	}
	//Q(x2, y2)
	for(int i = 1; i <= 2; i++)
	{
		cout << "Nhap Q[" << i << "]: "; cin >> Q[i];
	}
	
	if(P[1] == Q[1]  && P[2] == Q[2])
	{
		lamda = (int)((3*pow(P[1], 2) + E[1])*modInverse((2*P[2]), p))%p;
	}
	else
	{
		lamda = ((Q[2] - P[2])*modInverse((Q[1] - P[1]), p))%p;
	}
	cout << "Lamda = " << lamda << endl;
	x3 = (int)(pow(lamda, 2) - P[1] - Q[1])%p;
	if(x3<0) x3+=p;
	y3 = (lamda*(P[1] - x3) - P[2])%p; if(y3 < 0) y3+=p;
	cout << "(x3, y3) = (" << x3 << ", " << y3 << ")"; 
}
//int main()
//{
//	// ma hoa - thuat toan EEC
//	int E[3], P[3], Q[3]; // P, Q la 2 diem tren Ep(a, b)
//	int G[3]; 
//	int p; // thuc hien tren truong modulo p
//	int x3, y3; // ket qua cua phep cong  tren E: P+Q = (x3, y3)
//	cout << "Nhap Zp: "; cin >> Zp;
//	for(int i = 1; i <= 2; i++)
//	{
//		cout << "Nhap E[" << i << "]: "; cin >> E[i];
//	}
//	for(int i = 1; i <= 2; i++)
//	{
//		cout << "Nhap G[" << i << "]: "; cin >> G[i];
//	}
//	
//	
//}


