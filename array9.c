//WAP to accept 9 numbers in 3*3 array 2D.
#include<stdio.h>
int main()
{
    int a[3][3],i,j;
    for(i=0;i<3;i++)
    for(j=0;j<3;j++)
    {
        printf("\nEnter value for 2D Array :");
        scanf("%d",&a[i][j]);
    }
    printf("2D array elements are:");
    for(i=0;i<3;i++)
    {
        printf("\n");
        for(j=0;j<3;j++)
        printf("\t%d",a[i][j]);
    }
    return 0;

}