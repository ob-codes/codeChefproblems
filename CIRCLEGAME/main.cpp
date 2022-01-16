#include <iostream>
#include <vector>

using namespace std;

int main() 
{
	int t;
	cin >> t;
	
	while (t--)
    {
        int m, x;
        cin >> m >> x;
        m--;

        vector <int> tempvec;
        for (int n = 1; n <= x; n++) //N=1 to N=X
        {
            if(n==1) {cout << n << ' '; continue;}
            for(int i=1; i <= n;i++) //assign number to each index
            {
                tempvec.push_back(i);
            }
            for (int j = 1; j <= n-1; j++) //execute N-1 times
            {
                //vector<int>::iterator index = tempvec.begin() + m-1;
                //if (*index > tempvec.size()) *index %= tempvec.size();
                //tempvec.erase(index);
                if (m > tempvec.size())  m %= tempvec.size();
                tempvec.erase(tempvec.begin() +m);
            }            
            cout << tempvec.front() << ' ';
        }
        cout << '\n';
    }
    return 0;
}