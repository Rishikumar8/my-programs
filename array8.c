//WAP to accept 10 number in array the search specific number,entered by user.
#include<stdio.h>
int main()
{
    int a[10],i,flag=0,key,pos;
    for(i=0;i<10;i++)
    {
        printf("\nEnter Number:");
        scanf("%d",&a[i]);
    }
    printf("\nPlease enter the number you want to search:");
    scanf("%d",&key);
    for(i=0;i<10;i++)
    {
        if(a[i]==key)
        {   pos=i+1;
            flag=1;
            break;
        }
    }
    if(flag==1)
    printf("\nNumber found at a[%d] position.",pos);
    else printf("\nNumber Not found.");
    return 0;
    
}