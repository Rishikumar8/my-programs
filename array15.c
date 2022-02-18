//WAP to check the 3*3 matrix is identical or not.
#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],i,j,flag=0;
    printf("\nEnter The Value for First Matrix:");
    for(i=0;i<3;i++)
    for(j=0;j<3;j++)
    {
        printf("\nEnter The Value for 2D Array:");
        scanf("\t%d",&a[i][j]);
    }
    printf("\nEnter The Value for Second Matrix:");
    for(i=0;i<3;i++)
    for(j=0;j<3;j++)
    {
        printf("\nEnter The Value for 2D Array:");
        scanf("\t%d",&b[i][j]);
    }
    printf("The First Matrix is\n :");
    for(i=0;i<3;i++)
    {
        printf("\n");
        for(j=0;j<3;j++)
        printf("%d\t",a[i][j]);
    }
    printf("\nSecond Matrix is:\n");
    
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
    printf("\nThe matrix is identical");
    else printf("\nThe matrix is not identical");
    return 0;
    
}