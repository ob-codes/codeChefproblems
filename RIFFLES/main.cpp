#include <iostream>
#include <vector>
//#include <math.h>

using namespace std;

#define ull unsigned long long
int riffles(vector<int>&, int, int&);

int main() 
{
	//this program finds a string inside another binary string
	int t;
	cin >> t;

	while (t--)
    {
        int n, times;
        cin >> n >> times;

        //int * array = new int[n];
        vector<int> vector1;
        
        for (auto i = 0; i < n; i++)
        {
            vector1.push_back(i+1);
            cout << vector1[i] << ' ';          
        }
        cout << '\n';

        riffles(vector1, n, times);
        for (int i = 0; i < n; i++)
        {
            cout << vector1[i] << ' ';
        }
        cout << '\n';
        //delete []array;
    }
    
    return 0;
}

int riffles(vector<int>& vector1, int arr_len, int &times)
{
    //int * arr_temp = new int[arr_len];
    vector<int> arr_temp;
    if (times<1) return 0;
    times--;
    
    for (auto i = 0; i < arr_len; i++)
    {
        if (i==0 || i == arr_len-1)
        {
            arr_temp.push_back(vector1[i]);
        }
        else
        {
            if (i%2!=0)
            {
                arr_temp[i - 1 + arr_len/2] = vector1[i];
            }
            else
            {
                arr_temp[i - 1] = vector1[i];
            }
        }
        
    }
    vector1 = arr_temp;
    
    riffles(vector1, arr_len, times);
    //delete []arr_temp;    
    return 0;    
}