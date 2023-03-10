#include <stdio.h>
#include <math.h>

int main()
{
    int n , i , flag = 1;
    
    printf("Enter a number : ");
  
    scanf("%d", &n);
    
    if(n == 0)
    {
    	printf("\n%d is neither prime nor composite", n);
	}
	else
	{
	    if(n == 1)
		{
		   flag = 0;    	
		}
		else
		{
		    for(i = 2; i <= n/2 ; i++)
	        {
                if (n % i == 0) 
		        {
                    flag = 0;
                    break;
                }
            }	
		}
    }
  
    if (flag == 1) 
	{
        printf("\n%d is a prime number", n);
    }
    else 
	{
        printf("\n%d is not a prime number(composite number)", n);
    }
  
    return 0;
}
