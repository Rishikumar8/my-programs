//WAP to accept 5 number in any array copy to another array.
#include<stdio.h>
int main()
{
    int a[5],b[5],i,j;
    for(i=0;i<5;i++)
    {
        printf("\nEnter Number:");
        scanf("%d",&a[i]);
     
    }
    printf("\nElements of original array:");
    for(i=0;i<5;i++)
    printf("\n%d",a[i]);
    for(i=0;i<5;i++)
    b[i]=a[i];
    printf("\nElements of new array:");
    for(i=0;i<5;i++)
    printf("\n%d",b[i]);
    return 0;
}