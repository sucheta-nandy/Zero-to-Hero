#include<stdio.h>
#include<conio.h>
int main(){
	int i,fact,a;
	printf(" Enter The Number whose Factorial Is to be found : \n ");
	scanf("%d",&a);
	fact=1;
	for( i=1;i<=a;i++ ){
		fact =fact*i;
	}
	printf("Factorial of %d is %d",a,fact);
	getch();
	return 0;
	
}
