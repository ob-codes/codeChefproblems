#include <iostream>
using namespace std;

int sum(int, int);

int main() 
{
	// your code goes here
	int t, D, N, result=0;
	cin >> t;
	while (t>0)
	{
	    t--;
	    cin >> D;
	    cin >> N;
	    result = sum(D, N);
	    cout << result << endl;
	}
	return 0;
}

int sum(int D, int N)
{
    int value=0;
    if (D < 1) return N;
    D -= 1;
    N = sum(D, N);
    for (int i=1; i<=N;i++) value += i;
    return value;
}