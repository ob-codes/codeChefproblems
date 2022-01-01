#include <iostream>
using namespace std;

int main() 
{
	// your code goes here
    int t;
    cin >> t;

    while(t>0 && t <=1000)
    {
        t--;
        unsigned int x, y, small, large;
        long long  GCD, LCM, rem=1, temp;
        
        cin >> x;
        cin >> y;
        
        if (x > y) 
        {
            large = x;
            small = y;
        }
        else
        {
            large = y;
            small= x;
        }
        while (large > 0)
        {
            GCD = rem;
            rem = large % small;
            large = small;
            small = rem;
            if (rem == 0) break;
        };
        
        LCM = (long long) x*y / GCD;
        cout << GCD << " " << LCM << endl;
    }
	return 0;
}