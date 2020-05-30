#include<stdio.h>
int main()
{
	int sp,cp;
	int profit;
	printf("Enter selling price");
	scanf("%d",&sp);
	printf("Enter cost price");
	scanf("%d",&cp);
	profit=sp-cp; /*profit=selling price-cost price*/
	printf("Profit is Rupee %d only.",profit);
	profit=(float)profit/100*cp;
	printf("\nProfit Percentage is %d percent only.",profit);
	getch();
	
}
