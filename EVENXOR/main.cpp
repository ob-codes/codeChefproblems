#include <iostream>
using namespace std;

unsigned int countSetBitsUtil(unsigned int);
unsigned int countSetBits(unsigned int);

int main() 
{
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    int size, count=0;
	    cin >> size;
	    
	    for (int j=1;j<=1000;j++)
	    {
	       if (count >= size) break;
	       if (countSetBits(j) %2==0)
	       {
	            cout << j << " ";
	            count++;
	       }
	    }
	    cout << endl;
	}
	return 0;
}

unsigned int countSetBits(unsigned int n)
{
    int bitCount = 0; // initialize the result
    bitCount += countSetBitsUtil(n);
 
    return bitCount;
}

unsigned int countSetBitsUtil(unsigned int x)
{
    if (x <= 0)
        return 0;
    return (x % 2 == 0 ? 0 : 1) + countSetBitsUtil(x / 2);
}