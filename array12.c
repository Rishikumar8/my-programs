//WAP to for 3*3 matrix transpose.
#include<stdio.h>
int main()
{
    int a[3][3],i,j;
    for(i=0;i<3;i++)
    for(j=0;j<3;j++)
    {
        printf("Enter Value for 2D Array:");
        scanf("\t%d",&a[i][j]);
    }
    printf("\nThe Original Matrix is:");
    for(i=0;i<3;i++)
    {
        printf("\n");
        for(j=0;j<3;j++)
        printf("\t%d",a[i][j]);
    }
    printf("\nTranspose of the matrix:");
    for(i=0;i<3;i++)
    {
        printf("\n");
        for(j=0;j<3;j++)
        printf("\t%d",a[j][i]);
    }
    return 0;

}