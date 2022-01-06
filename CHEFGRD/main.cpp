#include <iostream>
using namespace std;

int main() 
{
	// not fully working
	int t;
	cin >> t;
	
	while (t--)
	{
	    int n, x, y, cx, cy;
	    cin >> n >> x >> y;
	    cx = (n+1)/2;
	    cy = cx;
	    
	    if ((x == y) || (x+y == cx)) cout << "0" << endl;
	    else
	    {
	        if ((x == cx) && (abs(cy-y)%2==0)) cout << "0" << endl;
	        else if ((y == cy) && (abs(cx-x)%2==0)) cout << "0" << endl;
	        else cout << "1" << endl;
	    }
	}
	return 0;
}
