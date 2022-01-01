#include <iostream>
#include <math.h>
using namespace std;

int main() {
	// your code goes here
	int p, t, price[13];
	
	price[0] = 0;
	for (int i=1;i<=12;i++) price[i] = pow(2, i-1);

	cin >> t;
	while (t>0)
	{
	    t--;
	    cin >> p;
	    int j=1, count=0;
	    while (p>0)
	    {
	        for (j=1;j<=12;j++)
	        {
	            if (p == price[j])
	            {
	                count++;
	                p = 0;
	                break;
	            }
	            else if (p < price[j])
	            {
	                count++;
	                p -= price[j-1];
	                break;
	            }
	            else if (p > price[12])
	            {
	                count++;
	                p -= price[12];
	                break;
	            }
	        }
	    }
	    cout << count << endl;
	}
	return 0;
}
