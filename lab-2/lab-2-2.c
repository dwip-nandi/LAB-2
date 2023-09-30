//write a c program for making pyramid
#include<stdio.h>
int main()
{
    printf("Enter height of pyramid:");
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=i;j>=1;j--)
        printf("%d  ",j);
        printf("\n");
    }
    return 0;
}