#include <iostream>
using namespace std;

int main() 
{
	// submitted version of code
	int t,N,count;
	cin >> t;
	
	while(t > 0 && t <= 100)
	{
	    t--;
	    cin >> N;
	    count = 0;
	    int K=0;
	    
	    for(K=1; K<N;K++)
        {
            N -= K;
            if (N == 1) count++;
            if (N<=K) break;
        }
        cout << count << endl;
	}
	return 0;
}