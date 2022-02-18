//WAP accept numbers is 3 x 3 x 3 ( three/ multidimensional dimension ) array and print it. 
#include<stdio.h>
int main()
{
    int a[2][3][2],i,j,k;
    for(i=0;i<3;i++)
    for(j=0;j<3;j++)
    {
    for(k=0;k<3;k++)
    {
        printf("Enter Value for 2D Array:");
        scanf("%d",&a[i][j][k]);
    }
    }
    for(i=0;i<3;i++)
    for(j=0;j<3;j++)
    {    printf("\n");
        for(k=0;k<3;k++)
        {
            printf("\t%d",a[i][j][k]);
        }
    }
   return 0;
}	