#include<stdio.h>
int main()
{
	int i,n;
	printf("enter the number of elements:");
	scanf("%u",&n);
	float bmi[n],height[n],weight[n];
	printf("\nEnter height in meter and weight in kg:\n");
	for(i=1;i<=n;i++){
		scanf("%f \t %f",&height[i],&weight[i]);
		bmi[i]=weight[i]/(height[i]*height[i]);}
		printf("person\t height\t weight\t bms\n");
		for(i=1;i<=n;i++){
			printf("\n%u\t %f\t %f\t %f",i,height[i],weight[i],bmi[i]);}
			return 0;
		}
	

