#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    int n, p, x, y, temp = 0;
	    cin >> n >> p >> x >> y;
	    int tot_time = 0;
	    for (int i=1; i<=p;i++)
	    {
	        cin >> temp;
            cin.ignore();
	        if (temp==1) tot_time += y;
	        else tot_time += x;
	    }
	    cout << tot_time << endl;
	}
	return 0;
}
