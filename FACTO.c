#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
	int i,fact,nb;
	fact=1;
	printf("entrer la valeur de nb\n");
	scanf("%d",&nb);
	if(nb<0)
	printf("le factoriel nest pas posible\n");
	else
	for(i=0;i<=nb;i++)
	{
		
	fact=fact*i;
	printf("le factorielle est: %d\n",fact*1);
	}
	return 0;
}
