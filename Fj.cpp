#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
	string  T, P;
	

	cin.ignore(P.size(), '\n');
	getline(cin, P);
	int m = P.size();
	cout << m<<endl;
	int F[50];
	int i, j, k;
	int mark;
	F[0] = -1;
	F[1] = 0;
	j = 2;
	while(j < m)
	{
		int len = 1;
		int d = j-1; F[j] = 0; 
		while(d >= 1) 
		{
			i = 0; k = d; mark = 0;
			
			while(P[i] == P[k] && k <= (j-1) )
			{
				mark++;
				cout << j << "\t" << d << "\t" << i << "\t" << k << "\t" << mark<< "\t" << len<< endl; 
				i++;
				k++;
				
			}

			if(mark ==len) 
			{
				F[j]++;
				
			}
			mark = 0;
			len++;
			d--;
		}
		j++;
	}
	for(int i = 0; i < m; i++)
	{
		cout << i <<"\t" << F[i] <<endl;
	}
	return 0;
	
}
