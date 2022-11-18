#include<iostream>
#include<cmath>
using namespace std;

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

int gcd(int a, int b)
{
	int tmp;
	while(b > 0)
	{
		tmp = a%b;
		a = b; b = tmp;
	}
	return a;
} 

int main()
{
	//tim kiem phan tu sinh cua Z*n
	//vd: n = 10, phi = 10*(1-1/2)*(1-1/5) 
	//Zn co phan tu sinh neu n = 2, 4, P^k hoac 2*p^k, p la snt le
	
	long phi[10], n, P, alpha;
	cout << "Nhap n: "; cin >> n;
	cout << "Nhap phi: "; cin >> P;
	int size;
	cout << "Nhap so phan tu cua phi: "; cin >> size;
	cout << "Nhap cac phan tu phi: ";
	for(int i = 0; i < size; i++)
	{
		cin >> phi[i];
	}
	alpha = -1;
	int count = 0;
//	for(int i = 1; i <= n; i++)
//	{
//		for(int j = 0; j < size; j++)
//		{ 
//			int t =  (long)pow(i, P/phi[j])%n; if(t < 0) t+=n;
//			if(t != 1)  
//			{
//				count ++;
//				
//			} cout << i << " " << j << " " << t << " " << count << endl;
//			if(alpha != -1) break;
//			
//		}
//		
//		if(alpha != -1) break;
//		if(count == size) 
//		{
//			alpha = i; //cout << alpha << " ";
//			break;
//		}
//		count = 0;
//	}
//	
	int check = 0;
	for(int i = 1; i <= n; i++)
	{
		int j = 0;
		while(j < size)
		{
			if((int)pow(i, phi[j])%n == 1)
			{
				check = 1;
			}cout << i << " " << j << " " << (int)pow(i, phi[j])%n << " " << check << endl;
			
			if(check == 1) break;
			j++;
		}
		if(check == 0)
		{
			alpha = i;
			break;
		}
		
		check = 0;
	}
	
	
	for(int i = 1; i < P; i++)
	{
		if(gcd(i, P) == 1 && squareMulti(alpha, i, n) >= alpha) 
		{
			cout << squareMulti(alpha, i, n)<<" " ;
		}
	}
	


}









