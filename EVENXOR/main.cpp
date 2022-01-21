#include <iostream>
#include <vector>
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
	    vector<int> even_numarray;
	    for (int j=0;j<=1000;j++)
	    {
	       if (countSetBits(j) %2==0)
	       {
	            even_numarray.push_back(j);
	       }
	    }
		for(int i=0; i<size; i++)
		{
			cout << even_numarray[i] << ' ';
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