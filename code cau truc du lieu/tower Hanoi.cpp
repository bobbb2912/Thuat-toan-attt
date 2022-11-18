#include<iostream>
using namespace std;

void tower(int n, char a, char b, char c)
{
	if(n == 1)
	{
		cout << a << "->" << c <<endl;
		return;
	}
	tower(n-1, a, c, b);
	tower(1, a, b, c);
	tower(n-1, b, a, c); 
 } 
 
 int main()
 {
 	char a, b, c;
 	int n;
 	a = 'A'; b = 'B'; c = 'C';
 	cout << "Nhap n: ";
 	cin >> n;
 	tower(n, a, b, c);
 	return 0;
 }
