#include <iostream>
#include <math.h>

using namespace std;

#define ull unsigned long long
int riffles(int *, int, int&);

int main() 
{
	//this program finds a string inside another binary string
	int t;
	cin >> t;

	while (t--)
    {
        int n, times;
        cin >> n >> times;

        int * array = new int[n];
        for (int i = 0; i < n; i++)
        {
            array[i] = i+1;
            cout << array[i] << ' ';
        }
        cout << '\n';
        riffles(array, n, times);
        for (int i = 0; i < n; i++)
        {
            cout << array[i] << ' ';
        }
        cout << '\n';
        delete []array;
    }
    
    return 0;
}

int riffles(int * array,int arr_len, int &times)
{
    int * arr_temp = new int[arr_len];

    if (times<1) return 0;
    times--;
    
    for (int i = 1; i < arr_len-1; i++)
    {
        if (i%2!=0)
        {
            arr_temp[i - 1 + arr_len/2] = array[i];
        }
        else
        {
            arr_temp[i - 1] = array[i];
        }
    }
    
    riffles(array, arr_len, times);
    delete []arr_temp;    
    return 0;    
}