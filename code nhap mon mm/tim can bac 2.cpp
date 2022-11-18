#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int a, n;// tim can bac 2 cua a mod n
	cout << "a: "; cin >> a;
	cout << "n: "; cin >> n;
	int i = 0;
	while(i < n)
	{
		if((int)pow(i, 2)%n == a)
			cout << i << "  ";
		i++;
	}
}
