#include <iostream>
#include <string>
using namespace std;

int main() 
{
	// your code goes here
	int t, len;
    cin >> t;
    while (t > 0)
    {
        t--;
        string test;
        bool isPalindrome = true;
        cin >> test;

        len = test.size();
        for (int i=0;i<len/2;i++)
        {
            if (test[i] != test[len-i-1])
            {
                isPalindrome = false;
                break;
            }
        }
        if (isPalindrome) 
            cout << "wins" << endl;
        else 
            cout << "losses" << endl;
    }
	return 0;
}
