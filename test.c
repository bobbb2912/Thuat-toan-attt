
#include<stdio.h>
#include<math.h>
int a[20];

bool Ok(int x2,int y2){
    int i;
    for( i = 1; i < x2 ;i++)
        if(a[i] == y2 || abs(i-x2) == abs(a[i] - y2) )
            return false;
    return true;
}
 
void Xuat(int n){
    //in ra m?t k?t qu?
    for(int i=1;i<=n;i++)
        printf(" %d",a[i]);
    printf("\n");
}
 
void Try(int i,int n){
    for(int j = 1;j<=n;j++){
        // th? �?t qu�n h?u v�o c�c c?t t? 1 �?n n
        if(Ok(i,j)){
            //n?u c�ch �?t n�y th?a m?n th? l�u l?i v? tr�
            a[i] = j;
                        //n?u �?t xong qu�n h?u th? n th? xu?t ra m?t k?t qu?
            if(i==n) Xuat(n);
            Try(i+1,n);
        }
    }
}
 
int main(){
    int n = 8;// ? ��y m?nh cho b�i to�n l� 8 qu�n h?u tr�n b�n 8*8
    Try(1,n);
    return 0;
}
