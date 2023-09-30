//writing a c program compute the summation of series....
#include<stdio.h>
int main()
{
    printf("Enter the number: ");
    int n,sum=0,a=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {     
        a+=i;
        sum+=a;
    }
    printf("%d\n",sum);
    return 0;
}