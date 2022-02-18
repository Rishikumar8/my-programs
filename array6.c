//WAP to accept 10 numbers in array and find maximum and minimum number.
#include<stdio.h>
int main()
{
    int a[10],max,min,i;
    for(i=0;i<10;i++)
    {
        printf("\nEnter Number:");
        scanf("%d",&a[i]);

    }
    max=a[0];
    for(i=0;i<10;i++)
    {
        if(a[i]>max)
        max=a[i];
    }
    printf("\nMaximum Number is %d",max);
    min=a[0];
    for(i=0;i<10;i++)
    {
        if(a[i]<min)
        min=a[i];
    }
    printf("\nMinimum Number is %d",min);
    return 0;
    
}