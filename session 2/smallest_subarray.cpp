#include <vector>

vector<int> smallestSubarray(int sum, vector<int> input) 
{
	long int n=input.size();
    long int curr_sum=0,l=n+1;
    int i = 0, j = 0,start,end;
    vector<int> subarray;
    while (j < n) 
    { 
        while (curr_sum <= sum && j < n) 
        { 
            if (curr_sum <= 0 && sum > 0) 
            { 
                i = j; 
                curr_sum = 0; 
            } 
  
            curr_sum += input[j++]; 
        } 
        while (curr_sum > sum && i < n) 
        { 
            if (j - i < l) 
            {
                l = j - i;
                start=i;
                end=j;
            } 
            curr_sum -= input[i++]; 
        } 
    } 
    for(i=start;i<end;i++)
    {
        subarray.push_back(input[i]); 
    }
    return subarray;
}
