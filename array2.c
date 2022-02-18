//WAP to accept 5 numberin any array and print in reverse order.
#include<stdio.h>
int main()
{
    int a[5],i;
    for(i=0;i<5;i++)
    {
        printf("Enter Number:");
        scanf("%d",&a[i]);
    }
    printf("Reverse Numbers are:\n");
    for(i=4;i>=0;i--)
    printf("\n%d",a[i]);
    return 0;
    
}