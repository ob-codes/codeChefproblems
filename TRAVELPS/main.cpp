#include <iostream>
#include <string>
using namespace std;

int main() {
	// your code goes here
	int t;
	string str;
	cin >> t;
	while(t>0)
	{
	    t--;
	    int n, a_0, b_1;
	    cin >> n >> a_0 >> b_1;
	    
	    cin >> str;
	    int tot_time=0;
	    for (int i=0; i<n;i++)
	    {
	        if (str[i]=='1') tot_time += b_1;
	        else tot_time += a_0;
	    }
	    cout << tot_time << endl;
	}
	return 0;
}
