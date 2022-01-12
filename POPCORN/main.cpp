#include <iostream>
#include <string>
#define ul unsigned long 

using namespace std;

int main() 
{
	//this program finds a string inside another binary string
	int t;
	cin >> t;
	
	while (t--)
    {
        ul a1, a2, b1, b2, c1, c2;
        cin >> a1 >> a2 >> b1 >> b2 >> c1 >> c2;
        a1 += a2;
        b1 += b2;
        c1 += c2;

        if ((a1 > b1) && (a1 > c1)) cout << a1 << '\n';
        else if ((b1 > a1) && (b1 > c1)) cout << b1 << '\n';
        else cout << c1 << '\n';
    }
    return 0;
}