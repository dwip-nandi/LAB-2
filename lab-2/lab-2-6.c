//to find the minimal number so that the product of the number is equal to a given number
#include<stdio.h>
int main()
{
    printf("Enter the number:");
    int n,b=0,i;
    scanf("%d",&n);
    for(int i=9;i>1;i--)
    {
        b=n/i;
        if(i*b==n)
          { printf("%d%d",b,i);
            break;
          }
    }
   
}