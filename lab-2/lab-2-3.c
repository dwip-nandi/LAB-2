//write a c program to determine prime number or not.........
#include<stdio.h>
int main()
{
    int p,i,count=0;
    scanf("%d",&p);
    if(p==1 || p==2)
    {
        printf("YES");
    }
    for(i=2;i<p;i++)
    {
       if(p%i==0)
       {count++;}
    }
    if(count>0)
        { printf("NO");}
    else{printf("YES");}

    return 0;
}
