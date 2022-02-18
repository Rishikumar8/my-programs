//WAP to accept 10 number in array and find minimum number.
#include<stdio.h>
int main()
{
    int a[10],min,i;
    for(i=0;i<10;i++)
    {
        printf("Enter Number:");
        scanf("%d",&a[i]);
    }
    min=a[0];
    for(i=0;i<5;i++)
    {
        if(a[i]<min)
        min=a[i];
        
    }
    printf("\nMinimum number is %d",min);
    return 0;

}