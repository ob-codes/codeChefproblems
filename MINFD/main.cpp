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
            if (FDs[i] >= X)  {isFound = true; break;}
            sumofall += FDs[i];
        }
        if(isFound)  { cout << "1" << "\n";continue; }
        count = 0;
        if (sumofall < X) { cout << "-1" << "\n";continue; }
        else if (sumofall == X) { cout << N << "\n";continue; }
        else { cout << minimumFDs(FDs, N, X, sum) << '\n'; }

        delete[] FDs;
    }
    return 0;
}
int minimumFDs(int *FDs, int N, int X, int& sum)
{
    count++;
    int index = -1;
    int temp_sum = 0;
    
    for (size_t i = 0; i < N; i++)
    {
        if (temp_sum < FDs[i]) { temp_sum=FDs[i]; index = i;}               
    }
    FDs[index] = 0;
    sum += temp_sum;
    if (sum >= X) return count;
    return minimumFDs(FDs, N, X, sum);
}