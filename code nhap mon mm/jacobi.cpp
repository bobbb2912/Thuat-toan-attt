#include<iostream>
using namespace std;
////////////chua dung/////////////////
//tinh jacobi cua (a/b)
int a, b;
int TC1()
{ // 7411 9283
	int checka = 0, checkb = 0;
	if(a < 0)
	{
		a *= -1;
		checka = 1;
	}
	if(b < 0)
	{
		b *= -1;
		checkb = 1;
	}

	if(b%2!=0 && a > b)
	{
		a = a%b;
	}
	if(checka == 1) a *= -1;
	if(checkb == 1) b *= -1;
}
int TC2()
{
	int checka = 0, checkb = 0;
	if(a < 0)
	{
		a *= -1;
		checka = 1;
	}
	if(b < 0)
	{
		b *= -1;
		checkb = 1;
	}
	if(a == 2 && b%2 != 0)
	{
		if(b%8 == 1 || b%8 == -1)
			cout << "1";
		if(b%8 == 3 || b%8 == -3)
			cout << "-1";
	}
	if(checka == 1) a *= -1;
	if(checkb == 1) b *= -1;
}

int TC3()
{
	int checka = 0, checkb = 0;
	if(a < 0)
	{
		a *= -1;
		checka = 1;
	}
	if(b < 0)
	{
		b *= -1;
		checkb = 1;
	}
	while(b%2 != 0 && a %2 == 0)
	{
		a = a/2;
		
		if(a == 2 && b%2 != 0)
		{
			if(b%8 == 1 || b%8 == -1)
				a = a;
			if(b%8 == 3 || b%8 == -3)
				a = -1*a;
		}		
	}
	if(checka == 1) a *= -1;
	if(checkb == 1) b *= -1;
}
	
int TC4()
{
	int checka = 0, checkb = 0;
	if(a < 0)
	{
		a *= -1;
		checka = 1;
	}
	if(b < 0)
	{
		b *= -1;
		checkb = 1;
	}
	
	if(a%2!=0 && b%2 != 0 && a < b)
	{
		if(a%4 == 3 && b%4 == 3)
		{
			int tmp;
			tmp = a;
			a = -1*b;
			b = tmp;	
		}
		else
		{
			int tmp;
			tmp = a;
			a = b;
			b = tmp;
		}	
	}
	if(checka == 1) a *= -1;
	if(checkb == 1) b *= -1;		
}


int main()
{
	
	cout << "Nhap a: "; cin >> a;
	cout << "Nhap b: "; cin >> b;
	
	while(1)
	{cout << a << " " << b << " " << endl;
		TC1(); 
		 TC2();
		TC3();
		TC4();
		
	}
}

















