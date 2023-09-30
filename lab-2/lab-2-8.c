//fibonaci series
#include<stdio.h>
int main()
{
    printf("Enter how many number you want in fibonaci siries:");
    int n;
    scanf("%d",&n);
    int a=0,b=1,f=0;
    printf("%d ",a);
    for(int i=1;i<n-1;i++)
    {
        a=b;
        b=f;
        f=a+b;
        printf("%d ",f);
    }
    return 0;
}
