//WAP to accept 5 number in any array,another five number is second array and store the sum in third array.
#include<stdio.h>
int main()
{
    int a[5],b[5],c[5],i;
    printf("\nEnter first array elements:");
     for(i=0;i<5;i++)
    {
        printf("\na[%d]=",i);
        scanf("%d",&a[i]);
    }
    printf("\nEnter Second array elements:");
    for(i=0;i<5;i++)
    {
        printf("\nb[%d]=",i);
        scanf("%d",&b[i]);
    }
    for(i=0;i<5;i++)
    c[i]=a[i]+b[i];
    for(i=0;i<5;i++)
    printf("\nsum[%d]=%d",i,c[i]);
    
    return 0;

}