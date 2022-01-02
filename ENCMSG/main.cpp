#include <iostream>
#include <string>
using namespace std;

void encode(string a)
{
	int temp;
	string res;

	for (int i=0;i<a.size();i++)
	{
		temp = 109 - (int)a[i];
		res[i] = (char)(temp*2 +1 + (int)a[i]);
		cout << res[i];
	}
	cout << endl;
}

int main() 
{
	// your code goes here
	int t, len;
	cin >> t;
	cin >> len;
	while(t--)
	{
	    string str;
	    cin >> str;
		for (int i=0;i<len;i++)
	    //for (int i=0;i<str.size();i++)
	    {
	        if (i%2!=0)
	        {
	            char temp;
	            temp = str[i-1];
	            str[i-1]=str[i];
	            str[i]=temp;
	        }	        
	    }
		encode(str);
	}
	return 0;
}