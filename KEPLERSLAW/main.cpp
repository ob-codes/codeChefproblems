#include <iostream>
using namespace std;

void proportion(int, int, int, int);

int main() 
{
	// your code goes here
	int t;
	cin >> t;
	while (t--)
    {
        int t1, t2, r1, r2;
        
        cin >> t1 >> t2 >> r1 >> r2;
        proportion(t1, t2, r1, r2);
    }
    return 0;
}

void proportion(int a, int b, int c, int d)
{
    if (a*a *d*d*d == b*b * c*c*c) cout << "YES" << endl;
    else cout << "NO" << endl;
}