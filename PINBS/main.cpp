#include <iostream>
#include <string>

using namespace std;

int main() 
{
	//this program finds a string inside another binary string
	int t;
	cin >> t;
	
	while (t--)
    {
        bool isfound = false;
        string str, str2("10"), str3("11");
        cin >> str;
        cin.ignore();
        if (str.find(str2) != string::npos || str.find(str3) != string::npos)
        {
            isfound = true;
        }
        
        if (isfound) cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }
    return 0;
}