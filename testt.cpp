#include<iostream>
#include<cmath>
using namespace std;

int main()
{
		int a[27];

	a[0] = 'A';	a[1] = 'B';	a[2] = 'C'; a[3] = 'D';	a[4] = 'E';	a[5] = 'F';	a[6] = 'G';	a[7] = 'H';
	a[8] = 'I';	a[9] = 'J';	a[10] = 'K';	a[11] = 'L';	a[12] = 'M';	a[13] = 'N'; a[14] = 'O';	a[15] = 'P';	a[16] = 'Q';	a[17] = 'R';	a[18] = 'S';	a[19] = 'T';	a[20] = 'U';	a[21] = 'V';	a[22] = 'W';	a[23] = 'X';	a[24] = 'Y';	a[25] = 'Z';

	string PlainTxt;
	int Key; 
	  
	cout << "Nhap ban ro: "; cin.ignore(PlainTxt.size(), '\n');
	
				getline(cin, PlainTxt);
				cout << "Nhap khoa: "; cin >> Key;
				int len = PlainTxt.length();
				int Encrypt[50];
				for(int i = 0; i < len; i++)
				{
					for(int j = 0; j < 26; j++)
					{
						if(PlainTxt[i] == a[j]) Encrypt[i] = (Key+j)%26;
					}
				}
					
				for(int i = 0; i < len; i++)
				{
					cout << Encrypt[i] <<"-";
				}
//-------------
//	long long x;
//	int n = 1;
//	while(n <=33)
//	{
//		int d = pow(n, 3) / 33;
//		x = pow(n, 3) - d*33;
//		if(x == n) cout << x << "  ";
//		n ++;
//		
//	}
//	int x, y;
//
//	x = 0;
//	y = 0;
//	while(x < 11)
//	{//cout << x << " " << y << endl;
//		while(y < 11)
//		{
//			int sum = (int)(pow(x, 3) + x + 6)%11;
//			if(pow(y, 2) == sum)
//				cout << x << " " << y << endl;
//		
//			y++;
//		}
//		y = 0;
//		x++;
//	}
//----------------
//	int x, y;
//
//	x = 0;
//	y = 0;
//	while(x < 19)
//	{//cout << x << " " << y << endl;
//		while(y < 19)
//		{
//			int sum = (int)(pow(x, 3) + x + 1)%19;
//			if(pow(y, 2) == sum)
//				cout << x << " " << y << endl;
//		
//			y++;
//		}
//		y = 0;
//		x++;
//	}
//	return 0;
//-------------
}
