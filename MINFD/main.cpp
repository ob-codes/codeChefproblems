#include <iostream>
using namespace std;

int count;
int minimumFDs(int *, int , int , int& );
int main() 
{
	int t;
	cin >> t;
	
	while (t--)
    {
        int N, X, sumofall=0, sum = 0;
        bool isFound = false;
        cin >> N >> X;
        int* FDs = new int[N];

        for (int i = 0; i < N; i++)
        {
            cin >> FDs[i];
            if (FDs[i] >= X) 
            {
                isFound = true; 
                //break;
            }
            sumofall += FDs[i];
        }
        if(isFound)  { cout << "1" << endl; }
        else
        {
            count = 0;
            if (sumofall < X) { cout << "-1" << endl; }
            else if (sumofall == X) { cout << N << endl; }
            else { cout << minimumFDs(FDs, N, X, sum) << endl; }
        }
        delete[] FDs;
    }
    return 0;
}
int minimumFDs(int *FDs, int N, int X, int& sum)
{
    count++;
    int index = -1;
    int highest = 0;
    
    for (size_t i = 0; i < N; i++)
    {
        if (highest < FDs[i]) { highest=FDs[i]; index = i;}               
    }
    FDs[index] = 0;
    sum += highest;
    if (sum >= X) return count;
    return minimumFDs(FDs, N, X, sum);
}