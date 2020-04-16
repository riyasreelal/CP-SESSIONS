#include <iostream>
 
using namespace std;
 
int main() 
{
    int t;
    cin>>t;
    while(t--)   //loop for test cases
    {
        int n,count=0;
        std::cin>>n;  //accept number of elements
        int a[n];
        for(int i=0;i<n;i++)     //accept array elements
        {
            std::cin>>a[i];
        }
        for(int i=2;i<n;i++)
        {
            int j=i-1,k=i-2,temp=i;
            if(a[j]>a[k] && a[i]<a[j])
            {
                count++;
                while((k-1)>=0 && (temp+1)<n)
                {
                    if((a[k-1]<a[k]) && (a[temp]>a[temp+1]))
                    {
                        count++;
                    }
                }
            }
        }
        std::cout<<count<<endl;
    }
    return 0;
}
