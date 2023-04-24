#include<stdio.h>

main()

{
	int a=1,n,f=1;
	
	printf("value of N=");
	scanf("%d",&n);
	
	while(a<=n)
	{
           f=f*a;
	   	
	   a++;
  	}
  	printf("factorial =%d",f);
   
}
