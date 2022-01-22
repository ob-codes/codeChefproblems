#include <iostream>
#include <vector>

using namespace std;

int main() 
{
	int t;
	cin >> t;
	
	while (t--)
    {
        size_t m, x;
        cin >> m >> x;
        m--;        
        
        for (int n = 1; n <= x; n++) //N=1 to N=X
        {
            if(n==1) {cout << n << ' '; continue;}
            vector <int> tempvec;
            
            for(int i=1; i <= n;i++) //assign number to each index
            {
                tempvec.push_back(i);
            }
            for (int j = 1; j <= n-1; j++) //execute N-1 times
            {
                //vector<int>::iterator index = tempvec.begin() + m-1;
                //if (*index > tempvec.size()) *index %= tempvec.size();
                //tempvec.erase(index);
                
                size_t len = tempvec.size();
                if (m >= len)  m %= len;
                
                tempvec.erase(tempvec.begin() +m);
            }            
            cout << tempvec.front() << ' ';
        }
        cout << '\n';
    }
    return 0;
}