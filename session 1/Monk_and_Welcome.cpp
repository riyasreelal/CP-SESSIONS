#include <iostream>
 
using namespace std;
 
int main() 
{
	int n;
	std::cin >> n;	
	int A[n], B[n],C[n];		//input array 1
	for(int i=0;i<n;i++)
	{
		std::cin>>A[i];
	}
	for(int i=0;i<n;i++)		//input array 2
	{
		std::cin>>B[i];
	}
	for(int i=0;i<n;i++)		//sum of both arraya
	{
		C[i]=A[i]+B[i];
	}
	for(int i=0;i<n;i++)		//display sum
	{
		std::cout<<C[i]<<" ";
	}			
}
