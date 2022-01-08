#include <iostream>
#include <math.h>
using namespace std;

int calculate(int, int);

int main() 
{
	// your code goes here
	int t;
	cin >> t;
	while (t--)
    {
        int population, days, res;
        
        cin >> population >> days;
        res = calculate(population, days);
        cout << res << endl;
    }
    return 0;
}

int calculate(int a, int b)
{
    int infected;
    if (b <= 10) infected = pow(2, b);
    else 
    {
        infected = pow(3, (b-10))*pow(2, 10);
    }
    return infected;
}