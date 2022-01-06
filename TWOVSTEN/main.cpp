#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;

    while(t--)
    {
        int temp;
        cin >> temp;

        if (temp %10 ==0) cout << "0" << endl;
        else if (temp %5 ==0) cout << "1" << endl;
        else cout << "-1" << endl;
    }

	return 0;
}
