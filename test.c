
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
        // th? ð?t quân h?u vào các c?t t? 1 ð?n n
        if(Ok(i,j)){
            //n?u cách ð?t này th?a m?n th? lýu l?i v? trí
            a[i] = j;
                        //n?u ð?t xong quân h?u th? n th? xu?t ra m?t k?t qu?
            if(i==n) Xuat(n);
            Try(i+1,n);
        }
    }
}
 
int main(){
    int n = 8;// ? ðây m?nh cho bài toán là 8 quân h?u trên bàn 8*8
    Try(1,n);
    return 0;
}
