#include<stdio.h>
int main()
{
    int i=0,count=0;

    while(i==0)
    {
        count++;
        printf("%d\n",count);
        if(count==10)
        {
            i++;
        }
    }

    int j=0,count2=0;
    float a=0;
    
    while(j==0)
    {
        count2++;
        a++;
        if(a/2==count2/2)
        {
            printf("%d\n",count2);
        }
        if(count2==10)
        {
            j++;
        }
    }
}