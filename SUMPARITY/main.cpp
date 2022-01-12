#include <iostream>

using namespace std;

int main() 
{
	int t;
	cin >> t;
	
	while (t--)
    {
        int size, value;
        cin >> size >> value;
        
        value &= 1;
        
        if (value == 0) cout << "Even" << '\n'; //size%2 !=0 && 
        else if (value == 1) cout << "Odd" << '\n';
        else cout << "Impossible" << '\n';
    }
    return 0;
}