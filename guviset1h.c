#include<stdio.h>
void main()
{
	int N,sum=0,i;
	printf("enter number");
	scanf("%d",&N);
	if(N>0){
	for(i=0;i<=N;i++)
	{
		sum=sum+i;
	}
	printf("sum is%d",sum);
} else
printf("not a whole number");
	
}
