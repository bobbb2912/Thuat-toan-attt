#include<iostream>
#include<cmath>
using namespace std;


////bool prime[] = {false} ;
//int sieve_Eratosthenes(int n, int t)
//{
//	bool prime[n+1] = {false};
//	for(int i = t; i <= sqrt(n); i++)
//	{
//		if(!prime[i])
//		{
//			for(int j = i*i; j <= n; j+=i)
//				prime[j] = true;
//		}	
//	}
////	for(int i = t; i <= n; i++)
////		return (prime[i] == false);
//}

int Eratosthenes_PhanDoan(int n, int delta)
{
	bool prime[n] = {false};
	for(int i = 2; i <= (n); i+=delta) //kiem tra tung khoang voi kich thuoc delta
	{
		for(int j = i; j <= (i+delta-1) && j<=n; j++) // kiem tra nguyen to trong khoang delta
		{
			for(int p = 2; p <= sqrt(i+delta-1); p++) // kiem tra nguyen to
			{
				if(j%p == 0 && j != p)
					prime[j] = true;
				if(prime[j] == true) break;
			}
//			cout << "prime[" << j << "]" << prime[j]<<endl;
		}
		
	}
	prime[2] = false;
	for(int i = 2; i <= (n); i++)
	{
		if(prime[i] == false) cout << i << " ";
	}

}

int main()
{
	int n, delta;;
	cout << "n = ";
	cin >> n;
	while(delta>sqrt(n))
	{
	cout << "delta (<= sqrt(n)) = ";
	cin >> delta;
	}
	cout << endl;
	Eratosthenes_PhanDoan(n, delta);
	return 0;
}

