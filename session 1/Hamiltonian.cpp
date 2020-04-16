#include <iostream>
 
using namespace std;
 
int main() 
{
	int n,count;
	std::cin>>n;
	int a[n];
	for(int i=0;i<n;i++)      //input array
	{
		std::cin>>a[i];
	}
	for(int i=0; i<n-1;i++)             
 	{
		//counter is used to check if all elements to right of a[i] is less than a[i] (works like a flag)
   		count=n-1-i;		
   		for(int j=i+1; j<n; j++)
   		{
			if(a[i]>=a[j])	//if element on the right is less than a[i] counter decreases by 1 till it reaches zero
			{
				count-=1;
			}
			else       //breaks if even one element to the right is greater than a[i]
			{
				break;
			}
   		}
		
		//when counter is zero it indicates that all elements to the right of a[i] is lesser than a[i]
		
   		if(count==0)  		
   		{						
			std::cout<<a[i]<<" ";
   		}
  	}
   	std::cout<<a[n-1];  //the last element does not have any elements to its right therefore it is the largest element and hence gets printed
 
	return 0;
}
