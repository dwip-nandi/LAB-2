//palindrome or not
#include<stdio.h>
int main()
{
    printf("Enter the number: ");
    int n,b,new=0;
    scanf("%d",&n);
    int t=n;
   while(n>0)
    {   
        b=n%10;
        n=n/10;
        new=new*10+b;
    }
    if(t==new) printf("YES\n");
    else printf("NO\n");
    return 0;
}