#include<iostream>
using namespace std;

int a[20];
int n;
int OK[20] = {0}; //danh dau chua co phan tu nao su dung
void print_permu()
{
	for(int i = 1; i <= n; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}

void Try_permutation(int size)
{	
	for(int i = 1; i <= n; i++)
	{
		if(!OK[i])
		{
			a[size] = i;
			OK[i] = 1; // danh dau la da dung
			if(size == n) // kiem tra neu da chua mot hoan vi thi in ra
				print_permu();
			else
				Try_permutation(size+1);
			OK[i] = 0;
		}
	}
}

int main()
{
	cout << "Enter n: ";
	cin >> n;

	Try_permutation(1);
}
