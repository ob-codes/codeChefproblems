#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    int n, p, x, y;
	    cin >> n; 
		cin >> p;
		cin >> x;
		cin >> y;
	    int tot_time = 0;
		int *temp = new int[n];

		for (int i=0; i<n; i++) cin >> temp[i];
	    
	    for (int i=0; i<p; i++)
	    {
	        if (temp[i]==1) tot_time += y;
	        else tot_time += x;
	    }
	    cout << tot_time << endl;
		delete[] temp;
	}
	return 0;
}
