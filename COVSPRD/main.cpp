#include <iostream>
#define ull unsigned long long

using namespace std;

int calculate(ull, ull);

int main() 
{
	// your code goes here
	int t;
	cin >> t;
	while (t--)
    {
        ull population, days;
        
        cin >> population >> days;
        calculate(population, days);
    }
    return 0;
}

int calculate(ull a, ull b)
{
    ull infected =1;
    if (b==0)
    {
        cout << infected << endl;
        return 0;
    }
    for (int i=1;i <=b;i++)
    {
        if (infected >= a)
        {
            infected = a;
            break;
        }
        if (i<=10) infected *= 2;
        else if (i>10) infected *= 3;
    }
    cout << infected << endl;
    return 0;
}