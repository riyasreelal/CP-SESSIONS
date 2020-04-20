#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    int t;           //test cases
    char s[2001];   //input string
    cin >> t;
    while (t--) 
    {
        cin >> s;
        int i = strlen(s) - 1;    //to store length of input string
        while (i >= 0) 
        {
            //to get length of each word that appears before the first delimiter from the end            
            while (i >= 0 && s[i] != '.')   
            {
                i--;
            }
            if (i > 0) 
            {
                printf("%s.", s + (i + 1));
                s[i] = '\0';
            }
            else
            printf("%s", s + (i + 1));
            i--;
        }
        cout << endl;
    }
    return 0;
}