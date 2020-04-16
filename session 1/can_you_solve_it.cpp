#include<iostream>
using namespace std;

/* to print the max value of |Ai - Aj| + |i - j| for each test case */
 
int main() 
{
    int t;
    std::cin>>t;
    while(t--)            //loop for test cases
    {
        int n,max=0,ans;
        std::cin>>n;     //input number of elements
        int a[n];
        for(int i=0;i<n;i++)   //input elements of array
        {
            std::cin>>a[i];
        }
        for(int i=0;i<n;i++)         
        {
            for(int j=0;j<n;j++)
            {
                ans=abs(a[i]-a[j])+abs(i-j);  //evaluates the given expression
                if(max<ans)      //change max value for the expressions
                {
                    max=ans;
                }
            }
        }
        std::cout<<max<<endl;   //print the max value
    }
    return 0;
}
