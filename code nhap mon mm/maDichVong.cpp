#include<iostream>
#include<string>
using namespace std;

int modInverse(int a, int p) // a^-1 mod p
{
	int u, v;
	int x1 = 1, x2 = 0;
	u = a; v = p;
	while(u != 1)
	{
		int q = v/u;
		int r = v-q*u;
		int x = x2 - q*x1;
		v = u;
		u = r; 
		x2 = x1;
		x1 = x;
	}
	int modulo = x1%p;
	if(modulo < 0) modulo+=p; 
	return (modulo);
}

int main()
{
	char a[27];
	a[0] = 'A';	a[1] = 'B';	a[2] = 'C'; a[3] = 'D';	a[4] = 'E';	a[5] = 'F';	a[6] = 'G';	a[7] = 'H';
	a[8] = 'I';	a[9] = 'J';	a[10] = 'K';	a[11] = 'L';	a[12] = 'M';	a[13] = 'N'; a[14] = 'O';	a[15] = 'P';	a[16] = 'Q';	a[17] = 'R';	a[18] = 'S';	a[19] = 'T';	a[20] = 'U';	a[21] = 'V';	a[22] = 'W';	a[23] = 'X';	a[24] = 'Y';	a[25] = 'Z';
	int luachon;
	do
	{
		cout << "\n1. ma hoa" << endl << "2. giai ma\n";
		cout << "lua chon: "; cin >> luachon;
		
		
		switch(luachon)
		{
			case 1: {
				string PlainTxt;
				int Key;   
				cout << "Nhap ban ro: "; 
				cin >> PlainTxt; 
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
					cout << Encrypt[i] << "-";
				}
				cout << "\n";
				for(int i = 0; i < len; i++)
				{
					cout << a[Encrypt[i]] << "-";	
				}
				break; 
			}
			case 2: {
				int key;
				int decrypt[50];
				string cipherTxt;
				cout << "Nhap ban ma: "; cin >> cipherTxt;
				cout << "Nhap khoa: "; cin >> key;
				int len = cipherTxt.length();
				for(int i = 0; i < len; i++)
				{
					for(int j = 0; j < 26; j++)
					{
						
						if(cipherTxt[i] == a[j])
						{
							decrypt[i] = (j-key)%26;
							if(decrypt[i] < 0) decrypt[i] += 26;
							cout << i << " " << j  << " "<< i-j <<  endl;
						 } 
					}
				}
				
				for(int i = 0; i < len; i++)
				{
					cout << decrypt[i] << "-";
				}
				cout << "\n";
				for(int i = 0; i < len; i++)
				{
					cout << a[decrypt[i]] << "-";	
				}
				
				break;
			}
					
					
		}
	}while(luachon != 0);
	
	return 0;
	
} 
