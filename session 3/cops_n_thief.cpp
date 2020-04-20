#include <iostream>

using namespace std;

int main()
{
	int t;  //test cases
	cin >> t; 
	while (t--)
	{
		int m,x,y;
		cin >> m >> x >> y;
		int devu[100]={0},sum=0,start,end;  //devu is the array containing the houses which are free
		int cop[m];
		for (int i=0;i<m;i++)
		{
			cin >> cop[i];      //houses occupied by cops
		}
		for(int i=0;i<m;i++)
		{
		    start=cop[i]-x*y;   //each starting point of search
		    end=cop[i]+x*y;     //each ending house for search
            
			for(int j=((start>0)?(start-1):0);j<((end<100)?end:100);j++)
            {
				devu[j]--;
			}
		}
		for (int i=0;i<100;i++){
			if (devu[i]==0)
				sum++;
		}
		cout << sum << endl;
	}
}