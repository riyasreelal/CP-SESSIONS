#include<iostream>
using namespace std;
 
int main() 
{
    int t;
    std::cin>>t;
    while(t--)
    {
        int n,max=0,ans;
        std::cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            std::cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                ans=abs(a[i]-a[j])+abs(i-j);
                if(max<ans)
                {
                    max=ans;
                }
            }
        }
        std::cout<<max<<endl;
    }
    return 0;
}