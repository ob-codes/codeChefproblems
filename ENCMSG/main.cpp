#include <iostream>
#include <string>
using namespace std;

string interchange(string str)
{
	for (int i=0;i<str.size();i++)
	{
	    if (str[i] < 'a' || str[i] > 'z') return "Error";
		
		if (i%2!=0)
	    {
	        swap(str[i-1], str[i]);
			/*
			char temp;
	        temp = str[i-1];
	        str[i-1]=str[i];
	        str[i]=temp;
			*/
	    }	        
	}
	return str;
}

void encode(string a)
{
	int temp;
	string res;

	for (int i=0;i<a.size();i++)
	{
		/*
		temp = 109 - (int)a[i];
		res[i] = (char)(temp*2 +1 + (int)a[i]);
		*/
		temp = 97 + 122 - (int)a[i];
		res[i] = (char) temp;		
		cout << res[i];
	}
	cout << endl;
}

int main() 
{
	// your code goes here
	int t;
	cin >> t;

	while(t--)
	{
	    int len;
		string str;
	
		cin >> len >> str;

		str = interchange(str);
		
		encode(str);
	}
	return 0;
}