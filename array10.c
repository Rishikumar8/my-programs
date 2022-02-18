//WAP to accept 9 numbers in 3*3 array. and display the sum of its each row and column.
#include<stdio.h>
int main()
{
    int a[3][3],i,j,sum;
    for(i=0;i<3;i++)
    for(j=0;j<3;j++)
    {
        printf("\nEnter value for 2D Array:");
        scanf("%d",&a[i][j]);
    }
    for(i=0;i<3;i++)
    {
        printf("\n");
        for(j=0;j<3;j++)
        printf("\t%d",a[i][j]);
    }
    for(i=0;i<3;i++)
    {   sum=0;
         for(j=0;j<3;j++)

        sum=sum+a[i][j];
        printf("\nSum of Row %d is %d",i+1,sum);
        
    }
    
    for(i=0;i<3;i++)
    
    {   sum=0; 
        for(j=0;j<3;j++)
        sum=sum+a[j][i];
        printf("\nSum of column %d is %d",i+1,sum);
       
    }
     
    return 0;
    

}