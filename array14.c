//WAP to check the 3*3 matrix is symmetric or not.
#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],i,j,flag=0;
    printf("\nEnter The Value for first Matrix:");
    for(i=0;i<3;i++)
    for(j=0;j<3;j++)
    {
        printf("\nEnter Value for 2D Array:");
        scanf("%d",&a[i][j]);
    }
    for(i=0;i<3;i++)
    for(j=0;j<3;j++)
    {
        b[i][j]=a[j][i];
    }
    printf("\nTranspose of the matrix is:");
    for(i=0;i<3;i++)
    {
        printf("\n");
        for(j=0;j<3;j++)
        printf("%d\t",b[i][j]);
    }

    for(i=0;i<3;i++)
    for(j=0;j<3;j++)
    {
        if(a[i][j]!=b[i][j])
        flag=1;
        
    }
     if(flag==0)
    printf("\nThe matrix is symmetric");
    else printf("\nThe matrix is not symmetric");
    return 0;
}