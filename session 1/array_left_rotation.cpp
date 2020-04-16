#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);



int main()
{
    string nd_temp;
    getline(cin, nd_temp);

    vector<string> nd = split_string(nd_temp);

    int n = stoi(nd[0]);        //accept number of elements

    int d = stoi(nd[1]);        //accept number of rotations

    string a_temp_temp;
    getline(cin, a_temp_temp);

    vector<string> a_temp = split_string(a_temp_temp);

    vector<int> a(n);

    for (int i = 0; i < n; i++) {       //accept the aaray
        int a_item = stoi(a_temp[i]);

        a[i] = a_item;
    }
    if(d<n)     //if number of rotations is less than number of elements we can directly go about it
    {
            for (int i = 0; i < d; i++) { 
                a.push_back(a[0]);      //inbuilt function which pushes a copy of first element to the end of the array
                a.erase(a.begin());     //deletes the first element making the second element the first element
            }
    }
    else if(d>n)
    {
        d=d-n;      //same as before but reduces the amount of rotations 
        for (int i = 0; i < d; i++) { 
                a.push_back(a[0]);
                a.erase(a.begin());
            }
    } 
  
    // Print the rotated array 
    for (int i = 0; i < n; i++) { 
        cout << a[i] << " "; 
    } 



    return 0;
}

//additional part already given by website

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}
