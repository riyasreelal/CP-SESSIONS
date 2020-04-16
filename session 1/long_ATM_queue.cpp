#include <iostream>
using namespace std;
 
int main()
{
    int n;
    std::cin>>n;
    int a[n];
    for(int i = 0; i < n; i++)
        std::cin>>a[i];
    int cnt = 1;   //number of groups
    for(int i = 1; i < n; i++)    
    {
        if(a[i]>=a[i-1])   //checks groups based on increasing order of height
            continue;
        else        //if a person is shorter than the person in front of him, a new group starts
            cnt++;
    }
    std::cout<<cnt;
    return 0;
}
