#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int rows, seats, count=0;
        cin >> rows;
        cin >> seats;
        
        if (seats%2==0) count = seats/2;
        else count = seats/2 +1;
        
        if (rows%2==0) cout << (rows/2) * count << endl;
        else cout << (rows/2 +1) * count << endl;
    }
    
    return 0;
}