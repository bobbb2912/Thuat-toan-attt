#include<iostream>
using namespace std;

int InDaoNguoc(int n)
{
	if(n!=0)
	{
		cout << n%10;
		InDaoNguoc(n/10);
	}
 } 
 
int main()
{
	int n;
	cin >> n;
	cout << InDaoNguoc(n);
	return 0;
}
