//Nested of switch
#include<stdio.h>
#include<conio.h>
void main()
{
    int i=2,j=3;
    clrscr();
    switch(i)
    {
	case 2:
	switch(j)
	{
	    case 3: printf("\nA");break;
	}
	printf("\nB");
	default:printf("\nC");
     }
     getch();


}



