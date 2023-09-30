//writing a c program compute the summation of series....
#include<stdio.h>
int main()
{
    printf("Enter the number: ");
    int n,sum=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        sum+=4*(i*i);
    }
    printf("%d\n",sum);
    return 0;
}