#include <iostream>
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
    int infected =1;
    if (b==0) return infected=1;
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
    return infected;
}