#include <iostream>
#include <string>

using namespace std;

int main() 
{
	// your code goes here
	int t, last,temp1 ,temp2, res;
	string str;
	
	cin >> t;
	cin.ignore();
	
	while(t > 0 && t <=1000)
	{
	    t--;
	    temp1 =0,temp2=0, res=0;
	    getline(cin, str);
	    last = str.size()-1;
	    
	    temp1 = (int)(str[0] - '0');
	    temp2 = (int)(str[last] - '0');
	    
	    res = temp1 + temp2;
	    
	    cout << res << endl;
	}
	
	return 0;
}
