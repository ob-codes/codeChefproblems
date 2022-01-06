#include <iostream>
#include <string>
using namespace std;

int main() 
{
	// your code goes here
	int t;
	cin >> t;

	while(t>0 && t <= 1000)
	{
	    t--;
	    int len;
		string str;
		string res;
	
		cin >> len >> str;
        if (len < 1 && len >100) return 0;
		for (int i=0;i<str.size();i++)
    	{
    	    if (str[i] < 'a' || str[i] > 'z') return 0;
    		
    		if (i%2==0 && i+1<len)
    	    {
    	        swap(str[i], str[i+1]);
    	    }
    	    str[i] = 'a' + 'z' - str[i];
    	    cout << str[i];
    	}
    	cout << endl;
	}
	return 0;
}