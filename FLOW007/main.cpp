#include <iostream>
#include <string>

using namespace std;

int main() 
{
	// your code goes here
	int t, temp, maxIndex, lastFilledIndex;
	string str, temp_str;
	
	cin >> t;
	cin.ignore();
	
	while(t>0 && t<=1000)
	{
	    t--;
	    getline(cin, str);
	    
	    if (str.size() > 1000000) break;
	    if (maxIndex < str.size()) maxIndex = str.size();
	    
	    for (int i=str.size()-1,j=0;i>=0;i--,j++)
	    {
	        temp_str[j]= str[i];
	        lastFilledIndex = j;
	    }
	    for(int k=lastFilledIndex+1; k<maxIndex; k++) temp_str[k]= 0;
	    
	    cout << stoi(temp_str) << endl;
    }
	return 0;
}