//write a progtam to display a specific digit from an integer number
#include<stdio.h>
int main()
{
    printf("Enter the number: ");
    int n,a,b;
    scanf("%d%d",&n,&a);
    for (int i = 1; i <=a; i++)
    
    {
        b=n%10;
        n=n/10;

    }
    if(n==0) printf("Sorry,the digit does not exist\n");
    else
     printf("%d\n",b);
    return 0;
}