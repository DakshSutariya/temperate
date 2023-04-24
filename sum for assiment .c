#include<stdio.h>

main()
{
	int n,sum,firstdigite,lastdigite;
	
	printf("enter the value N=");
	scanf("%d",&n);
	
	lastdigite=n%10;
	
	do
	{
		n=n/10;
	}while(n>=10);
	
	firstdigite=n;
	
	sum=lastdigite+firstdigite;
	printf("sum is=%d",sum);
	
}
