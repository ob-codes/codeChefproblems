#include <iostream>
#include <string>
using namespace std;

char swap(char a)
{
	int temp;
	char res;
	temp = (int)a;

	for(int i=126;i>=temp;i--)
	{
		res = (char)i;
	}
	return res;
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
	        if (i%2==0)
	        {
	            char temp;
	            temp = str[i];
	            str[i]=str[i+1];
	            str[i+1]=temp;
	        }
			
	        //str[i] = swap(str[i]);
	    }
		cout << str;
	}
	return 0;
}