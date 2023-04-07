#include <stdio.h>
#include <math.h>

int main()
{
    int n , i , sum = 0;
    
    printf("Enter a number : ");
  
    scanf("%d", &n);
    
    for(i=1 ; i<2*n ; i=i+2)
    {
        sum += i;
    }
  
    if (sum == pow(n,2)) 
	{
        printf("\nThe fact that sum of the first %d odd numbers is equal to %d^2 (%d) is true" , n , n , sum);
    }
    else 
	{
        printf("\nThe fact that sum of the first %d odd numbers is equal to %d^2 (%d) is not true" , n , n , sum);
    }
  
    return 0;
}
