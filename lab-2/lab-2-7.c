// find out next greater number using same set of numbers............
#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    scanf("%s",&a);
    int l=strlen(a);
    int i,j,count=-1;
    for ( i = l-2; i >=0; i--)
    {
        if (a[l-1]>a[i])
        {
            int t=a[l-1];
            a[l-1]=a[i];
            a[i]=t;
            count=i;
            break;
        }
    }
    if(count==-1)
      {
        printf("Does not exist\n");
        return 0;
      }
    for(i=count+1;i<=l-1;i++)
    {
        for(j=count+1;j<=l-1;j++)
        {
            if(a[i]<a[j])
            {
                int t=a[i];
                a[i]=a[j];
                a[j]=t;
            }

        }
    }
     printf("%s\n",a);
     return 0;
    

}







/*
#include <stdio.h>
#include <string.h>
int main()
{
    char num[20];
    scanf("%s", num);
    int n = strlen(num), mark = -1;

    // try to find a smaller digit then the last digit of the input to get to the next largest number
    for (int i = n - 2; i > 0; i--)
    {
        if (num[n - 1] > num[i])
        {
            char temp = num[n - 1];
            num[n - 1] = num[i];
            num[i] = temp;
            mark = i;
            break;
        }
    }
    if (mark == -1)
    {
        //mark = -1 means you did not find any digit smaller then the last digit
        printf("Does not exist\n");
        return 0;
    }

    // sort the right side of the marked index to get the smallest number
    for (int i = mark + 1; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (num[i] > num[j])
            {
                char temp = num[j];
                num[j] = num[i];
                num[i] = temp;
            }
        }
    }
    printf("%s\n", num);
    return 0;
}*/
