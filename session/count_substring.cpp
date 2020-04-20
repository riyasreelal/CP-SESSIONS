#include <iostream>
using namespace std;

int main() 
{
	long int t;         //test cases
	cin>>t;
	while(t--)
	{
	    long int n;
	    cin>>n;
	    string bin;    //binary string with inputs 1 and 0
	    cin>>bin;
	    long long count=0;
	    for(int i=0 ; i<bin.size() ; i++)  //loop to count the number of 1's in string
	    {
	        if(bin[i]=='1')
	            count++;
	    }

        //now with each 1 of the total n number of 1's in the string we can make sub strings
        //with the first 1 we can make n sub strings, with second we can make n-1 and so on
        // Therefore we use the formula (n+n-1+n-2...+1 =n*(n+1)/2) 
        
	    cout<<(count*(count+1)/2)<<endl;  
	}
	return 0;
}