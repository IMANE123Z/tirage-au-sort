#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
	int i,fact,nb;
	fact=1;
	printf("entrez le nombre nb:\n");
	scanf("%d",&nb);
	if(nb<0)
	Printf("le factoriel nest pas possible\n");
	else
	for(i=1;i<=nb;i++){
		fact*=i;
		printf("le factpriel est:%d\n",fact*i);
	}
	return 0;
}
