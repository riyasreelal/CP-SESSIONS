#include <iostream>
 
using namespace std;
 
int main() 
{
	int n;
	std::cin >> n;	
	int A[n], B[n],C[n];
	for(int i=0;i<n;i++)
	{
		std::cin>>A[i];
	}
	for(int i=0;i<n;i++)
	{
		std::cin>>B[i];
	}
	for(int i=0;i<n;i++)
	{
		C[i]=A[i]+B[i];
	}
	for(int i=0;i<n;i++)
	{
		std::cout<<C[i]<<" ";
	}			
}