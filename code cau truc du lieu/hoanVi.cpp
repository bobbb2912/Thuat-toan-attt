#include<iostream>
using namespace std;

 #define MAX 20
 
void printArr(int a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		cout << a[i] << " ";	
	}	
	cout << "\n";
}

void permutation(int a[], int size, int n) // hoan vi
{
	if(size == 1)
	{
		printArr(a, n);
		return;
	}
	
	for(int i = 0; i < size; i++)
	{
		permutation(a, size-1, n);
		if(size % 2 == 1)
			swap(a[0], a[size-1]);
		else
			swap(a[i], a[size-1]);
	}
}

int main()
{
    int a[MAX];
    int n;
	cout << "Enter size array: "; cin >> n;
	for(int i = 0; i < n; i++)
	{
		a[i] = i+1;
	}
    permutation(a, n, n);
    return 0;
}
 	

