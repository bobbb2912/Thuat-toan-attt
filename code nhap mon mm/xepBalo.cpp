#include<iostream>
using namespace std;


int M[20], n, v[20], S; 
int Nhap()
{
	cout << "Nhap kich thuoc mang M: "; cin >> n;
	cout << "Nhap cac phan tu cua mang: ";
	for(int i = 0; i < n; i++)
	{
		cin >> M[i];
	}
 }

int xepBaLo_DST() // xep balo day sieu tang
{
	cout << "Nhap S: "; cin >> S;
	int i = n-1;
	int size = -1;
	int check = 0;
	int S_check = S;
	while(i >= 0)
	{
		if(S >= M[i])
		{
			v[i] = 1;
			S -= M[i];
			size++;
		}
		else v[i] = 0;
		i = i-1;
	}
	for(int i = 0; i < n; i++)
	{
		if(v[i] == 1)
			check += M[i];
	}
	if(check == S_check)
	{
		for(int i = 0; i < n; i++)
		{
			cout << v[i] << " ";
		}
		cout << endl; 
		for(int i = 0; i < n; i++)
		{
			if(v[i] == 1) 
				cout << M[i] << " ";
		}
	}
	else cout << "khong ton tai!";
	
	
}

int main()
{
	// 12 17 33 74 157 316 620 1230 2460
	// 5 7 13 30 57 116 230 460 920 
	Nhap();
	xepBaLo_DST();
	return 0;
}
