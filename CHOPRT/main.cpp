#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a,b,t;
	cin >> t;
	while(t>0)
	{
	    t--;
	    a=0,b=0;
	    cin >> a;
        cin >> b;
	    if (a==b) cout << "=\n";
	    else 
        {
            if (a<b) cout << "<\n";
	        else cout << ">\n";
        }
	}
	return 0;
}
