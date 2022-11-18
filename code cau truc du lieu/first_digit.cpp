#include<iostream>
using namespace std;

int first_digit(int a)
{
	if(a < 10) return a;
	return first_digit(a/10);	
}

int main()
{
	int a;
	cout << "Enter number: "; cin >> a;
	cout << first_digit(a);
	return 0;

}
