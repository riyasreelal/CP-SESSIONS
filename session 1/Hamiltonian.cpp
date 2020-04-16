#include <iostream>
 
using namespace std;
 
int main() 
{
	int n,count;
	std::cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		std::cin>>a[i];
	}
	for(int i=0; i<n-1;i++)
 	{
   		count=n-1-i;
   		for(int j=i+1; j<n; j++)
   		{
			if(a[i]>=a[j])
			{
				count-=1;
			}
			else 
			{
				break;
			}
   		}
   		if(count==0)
   		{
			std::cout<<a[i]<<" ";
   		}
  	}
   	std::cout<<a[n-1];
 
	return 0;
}