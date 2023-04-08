#include <stdio.h>
#include <math.h>

int main()
{
    int n , i , x ;
    
    printf("Enter a number : ");
  
    scanf("%d", &n);
    
    printf("Enter a number upto which multiplication table is to be printed : ");
    
    scanf("%d", &x);
    
    printf("\nMultiplication table of %d : " , n);
    
    for(i=0 ; i<=x ; i++)
    {
        printf("\n%d*%d = %d", n , i , n*i);
    }
  
    return 0;
}
