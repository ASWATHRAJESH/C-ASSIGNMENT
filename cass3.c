#include <stdio.h>

int main()
{
    int n , ori , rem , rev = 0;
    
    printf("Enter a number : ");
  
    scanf("%d", &n);
    
    ori = n;
    
    while(n>0)
    {
    	rem = n % 10;
    	rev = rev*10 + rem;
    	n /= 10;
    }
  
    if (rev == ori) 
	{
        printf("\n%d is a palindrome", ori);
    }
    else 
	{
        printf("\n%d is not a palindrome", ori);
    }
  
    return 0;
}
