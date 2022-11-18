#include <stdio.h>
#include <stdlib.h>
#include <math.h>

 


int main()
{
    int a,k,n,A,K[100],b,h,i,g,t,j;
    printf("BAI 9 Le Dinh Quyen");
    printf("\nnhap so a = ");
    scanf("%d",&a);
    printf("nhap so n = ");
    scanf("%d",&n);
    printf("nhap so k = ");
    scanf("%d",&k);
    h = k;
    b = 1;
    i = 0;
    g = k;
    if (k == 0)
    {
        printf("%d mu %d mod %d = %d",a,h,n,b);
    }
    for (i=0;k>0;i++)
    {
        K[i]=k%2;
        k=k/2;
        t=i;
        printf("%d   ",K[i]);
    }
    printf("\n");
    A = a;
    if (K[0]==1)
    {
        b = a;
    }
    for (j=1;j<=t;j++)
    {
        A = (A*A)%n;
        if (K[j]==1)
        {
            b = (A*b)%n;
        }
    }
    printf("%d mu %d mod %d = %d",a,h,n,b);
    return 0;
}
