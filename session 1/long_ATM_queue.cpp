#include <iostream>
using namespace std;
 
int main()
{
    int n;
    std::cin>>n;
    int a[n];
    for(int i = 0; i < n; i++)
        std::cin>>a[i];
    int cnt = 1;
    for(int i = 1; i < n; i++)
    {
        if(a[i]>=a[i-1])
            continue;
        else
            cnt++;
    }
    std::cout<<cnt;
    return 0;
}