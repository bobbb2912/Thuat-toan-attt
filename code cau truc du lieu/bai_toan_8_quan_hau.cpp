#include<iostream>;
#include<cmath> 
using namespace std;
	
#define N 20
int x[N];// x la cot
int a[N], b[N], c[N]; // a: dong, b: cheo xuoi, c: cheo nguoc

void Print()
{
	for(int i = 0; i < 8; i++)
		cout << x[i] << " ";
	cout << "\n";
}

void Try(int j)
{ //cot i hang j

	for(int i = 0; i < 8; i++)
	{
		if(a[i] == 1 && b[i+j] == 1 && c[i-j+7] == 1)
		{	

			x[j] = i;
			a[i] = 0;
			b[i+j] = 0;
			c[i-j+7] = 0;
			if(j < 7) Try(j+1);
			else Print();
			a[i] = 1;
			b[i+j] = 1;
			c[i-j+7] = 1;
		}
	}
}

int main()
{
	for(int i = 0; i <= 7; i++)
	{
		a[i] = 1;
		x[i] = -1;
	}
	for(int i = 0; i < 15; i++)
	{
		b[i] = 1;
		c[i] = 1;
	}
//	for(int i = -7; i <= 7; i++)

	Try(0);
	return 0;
}
 
