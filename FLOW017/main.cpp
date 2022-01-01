#include <iostream>
using namespace std;

int main() 
{
	// your code goes here
	int t;
	cin >> t;
	while (t>0)
	{
    	t--;
    	int a, b, c;
    	cin >> a >> b >>c;
    	
    	if (a == b) cout << a << endl;
    	else if (a>b)
    	{
    	    if (c >= a) cout << a << endl;
    	    else
    	    {
    	        if (c > b)  cout << c << endl;
    	        else cout << b << endl;
    	    }
    	}
    	else
    	{
    	    if (c >= b) cout << b << endl;
    	    else
    	    {
    	        if (c > a)  cout << c << endl;
    	        else cout << a << endl;
    	    }
    	}
    }
    return 0;
}
