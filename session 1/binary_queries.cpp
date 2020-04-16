#include <cstdio>
#include <iostream>
 
using namespace std;
 
int main()
{
    int n, q;
    std::cin>>n>>q;
	int a[n+1];
    for(int i = 1; i <= n; i++)
        std::cin>>a[i];
 
    while(q--)
    {
        const int PARITY_CHECK = 0, FLIP = 1;
 
        int query_type;
        std::cin>>query_type;
 
        if(query_type == PARITY_CHECK)
        {
            int left, right;
            std::cin>>left>>right;
 
            std::cout<<(a[right] == 1 ? "ODD\n" : "EVEN\n");
        }
        else if(query_type == FLIP)
        {
            int pos;
            std::cin>>pos;
        	a[pos] ^= 1;
        }
    }
 
    return 0;
}