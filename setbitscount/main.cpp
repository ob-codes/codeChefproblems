#include <iostream>
using namespace std;

int countsetbits(int);

int main()
{
    int num;
    cin >> num;

    cout << countsetbits(num) << endl;
    return 0;
}

int countsetbits(int x)
{
    if (x<=0) return 0;
    else return (x % 2? 1 : 0) + countsetbits(x >> 1);
}