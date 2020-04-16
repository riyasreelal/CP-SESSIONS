/* code chef problem 
 * sum of all sub squares kxk 
 */

void PrintAllSumKxK(int **mat, int n, int k){
	if (k > n) return;   //if k>n it is not possible to find sub squares
	
   for (int i=0; i<n-k+1; i++) //gives starting point for each sub square row
   {
      for (int j=0; j<n-k+1; j++)    //gives starting point for each sub square column
      {
          int sum = 0; //sum is reset everytime 1st position of sub square changes
	      
          for (int p=i; p<k+i; p++)  //loop runs from starting point i and increments upto k number of rows from i
		  
             for (int q=j; q<k+j; q++)     //loop runs from starting point j and increments upto k number of columns from j
		     
                 sum += mat[p][q];  
	      
           cout << sum << "  ";  //prints sum of sub square 
      } 
      cout << endl; 
   } 
}
