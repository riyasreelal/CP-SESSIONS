#include<bits/stdc++.h>
using namespace std;
 
long long SimilarElementsPairs (vector<int> A,int N) 
{
   sort(A.begin(),A.end());
    long int ans = 0;
 
    for(int i = 1; i < N; i++) {
        long long int cnt = 1, cnt2 = 1;
        while((A[i] == A[i-1]) or (A[i] == A[i-1]+1))
        {
            cnt2++;
            if(A[i] == A[i-1]) 
            {
               cnt++;
            }
            i++;
        }
        if(cnt2 != 1 and cnt2 != cnt) 
        {
           ans += (cnt2*(cnt2-1))/2;
        }
    }
    return  ans;
}
 
int main() {
 
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    std::cin >> N;
    vector<int> A(N);
    for(int i_A=0; i_A<N; i_A++)
    {
    	std::cin >> A[i_A];
    }
 
    long long out_;
    out_ = SimilarElementsPairs(A,N);
    std::cout << out_;
}