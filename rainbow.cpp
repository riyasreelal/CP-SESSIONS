#include <iostream>
using namespace std;

int main() 
{
	int t;     //test cases
	cin>>t;
	while(t--)
	{
	    int n,count=1,flag=1;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)   //input the array
	    {
	        cin>>a[i];
	    }
	    if(a[0]==1 && a[n/2]==7)      //check if the 1st num is 1 and if the mid number is 7
	    {
	        for(int i=0;i<n/2;i++)
	        {
	            //condition to check if the remaining numbers form a rainbow sequence
                if(a[i] != a[n-i-1] || a[i+1] - a[i] > 1 || a[i+1] - a[i]<0)  
	            {
	                flag=0;
	                break;
	            }
	        }
	        if(flag==1)
	        {
	            cout<<"yes"<<endl;
	        }
	        else
	        {
	            cout<<"no"<<endl;
	        }
	    }
	    else
	    {
	        cout<<"no"<<endl;
	    }
	}
	return 0;
}