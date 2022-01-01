#include <iostream>
using namespace std;

int factorial(int);

int main() 
{
	// your code goes here
	int t, num, result;
	cin >> t;
	while(t>0)
	{
	    t--;
	    cin >> num;
	    result = factorial(num);
	    cout << result << endl;
	}
	return 0;
}

int factorial(int a)
{
    if (a <1) return 1;
    a *= factorial(a-1);
    
    return a;
}