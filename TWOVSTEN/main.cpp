#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin >> t;

    while(t--)
    {
        int temp, attempts = 0;
        bool isDivisible = false;
        cin >> temp;

        for (int i=0; i < 5; i++)
        {
            if (temp %10 ==0)
            {
                isDivisible = true; 
                break;
            }
            temp *= 2;
            attempts++;
        }
        if (isDivisible) cout << attempts << endl;
        else cout << "-1" << endl;
    }

	return 0;
}
