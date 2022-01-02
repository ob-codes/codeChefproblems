#include <iostream>
using namespace std;

int main() 
{
	// your code goes here
	int t;
	int temp=0, ev_count=0, odd_count=0;
	cin >> t;
	
	while(t--)
	{
	    cin >> temp;
	    
	    if (temp % 2==0) ev_count++;
	    else odd_count++;
	}
	if (ev_count > odd_count) cout << "READY FOR BATTLE";
	else cout << "NOT READY";
	return 0;
}
