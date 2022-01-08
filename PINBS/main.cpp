#include <iostream>
#include <string>
#include <math.h>
#include <bitset>

using namespace std;

#define ull unsigned long long

string decimalToBinary(double);

int main() 
{
	// your code goes here
	int t;
	cin >> t;
	while (t--)
    {
        string str, str2;
        bool isfound = false;
        cin >> str;

        double len = str.size();
        double val = pow(2, len);

        for(double i=1; i < val;i++)
        {
            str2 = decimalToBinary(i);
            if (str.find(str2) != string::npos)
            {
                isfound = true;
            }
        }
        if (isfound) cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }
    return 0;
}

string decimalToBinary(double n)
{
    //finding the binary form of the number and 
    //converting it to string. 
    string str2 = bitset<64>(n).to_string();
    
    //Finding the first occurrence of "1"
    //to strip off the leading zeroes.
    const auto loc1 = str2.find('1');
    
    if(loc1 != string::npos)
        return str2.substr(loc1);
    
    return "0";
}