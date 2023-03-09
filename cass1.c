#include<stdio.h>
int main()
{
	int M;
	
	printf("Enter the value of M : ");
	
	scanf("%d",&M);
	
	if(M%3==0 && M%5==0)
		printf("\n%d is a Good Number",M);
	else if(M%3==0 && M%5!=0)
	    printf("\n%d is a Bad Number",M);
	else if(M%5==0 && M%3!=0)
	    printf("\n%d is a Poor Number",M);
	else
	    printf("\n%d is not a good , bad and also poor number so -1");
	    
	return 0;
}
