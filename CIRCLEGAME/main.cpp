#include <iostream>
#include <vector>

using namespace std;

int main() 
{
	int t;
	cin >> t;
	
	while (t--)
    {
        unsigned long m, x;
        cin >> m >> x;

        vector <int> tempvec;
        for (int n = 1; n <= x; n++)
        {
            if(n==1) {cout << 1 << ' '; continue;}
            for(int i=1; i <= n;i++)
            {
                tempvec.push_back(i);
            }
            for (int j = 1; j <= n-1; j++)
            {
                vector<int>::iterator index = tempvec.begin();
                index += m-1;
                /*
                for (int k=0;k<m-1;k++)
                {
                    index++;
                    if(index == tempvec.end())
                        index = tempvec.begin();
                }*/
                tempvec.erase(index);
            }            
            //int* pos = tempvec.data();//pointer to the first element
            //cout << *pos << ' ';
            cout << tempvec.front() << ' ';
        }
        cout << '\n';
    }
    return 0;
}