#include <vector>

vector<int> smallestSubarray(int sum, vector<int> input) 
{
	long int n=input.size();
    long int curr_sum=0,l=n+1;  //l is initailised to the length of largest sub array of given array
    int i = 0, j = 0,start,end;
    vector<int> subarray;
    while (j < n) 	  //j is the index of the element upto which sum from a[0] < given sum
    { 
        while (curr_sum <= sum && j < n)  
        { 
            if (curr_sum <= 0 && sum > 0) 
            { 
                i = j;   
                curr_sum = 0; 
            } 
  
            curr_sum += input[j++];   //get the sum of elements smaller than given sum from 1st element onwards
        } 
        while (curr_sum > sum && i < n)   
        { 
            if (j - i < l)      //to find the length of the minimum sub array
            {
                l = j - i;
                start=i;      //starting position is saved
                end=j;	      //ending position is saved
            } 
	    /*if current sum exceeds the given sum, the initial elements are subtracted from the current sum
	 	in order to bring the sum to a lower value*/
		
            curr_sum -= input[i++];   
        } 
    } 
    for(i=start;i<end;i++)   //loop runs from starting position of sub array till end position
    {
        subarray.push_back(input[i]); //the values are pushed from the end into a new vector array
    }
    return subarray; //the sub array is returned
}
