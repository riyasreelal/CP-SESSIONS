#include <iostream>
 
using namespace std;
 
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,count=0;
        std::cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
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