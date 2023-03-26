#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
	int n , i , flag = 1;
    
    cout<<"Enter a number : ";
  
    cin>>n;
    
    if(n == 0)
    {
    	cout<<"\n"<<n<<" is neither prime nor composite";
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
		cout<<"\n"<<n<<" is a prime number";
    }
    else 
	{
		
        cout<<"\n"<<n<<"is not a prime number(composite number)";
    }
  
    return 0;
}
