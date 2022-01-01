#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t, input;
	cin >> t;
	while(t > 0)
	{
		t--;
		cin >> input;
		bool isPrime = true;
		if (input ==1)
		{
		    cout << "no" << endl;
		    continue;
		}
		for (int i=2; i<input;i++)
		{
			if (input % i == 0)
			{
				isPrime = false;
				break;
			}
		}
		if (isPrime) cout << "yes" << endl;
		else cout << "no" << endl;
	}
	return 0;
}
