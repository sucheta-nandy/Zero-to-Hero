//Profit and loss
#include <stdio.h>
#include <conio.h>

int main()
{
	int cp,sp;
	printf("Enter the CP and SP: ");
	scanf("%d %d",&cp,&sp);
	if(sp>cp)
	{
		int profit=sp-cp;
		printf("The seller has made a profit of Rs: %d",profit);		
	}
	else
	{
		int loss=cp-sp;
		printf("The seller has made a loss of Rs: %d",loss);
	}
	getch();
	return 0;
}
