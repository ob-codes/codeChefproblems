#include <iostream>
#include <vector>
#define ul unsigned long 

using namespace std;

int main() 
{
	//this program finds a string inside another binary string
	int t;
	cin >> t;
	
	while (t--)
    {
        int size;
        cin >> size;
/*
        vector<vector<int>> grid;
        for (int i = 1; i <= size; i++)
        {
            vector<int> temp_vec;
            for (int j = 1; j <= size; j++)
            {
                temp_vec.push_back(i^j);
            }
            grid.push_back(temp_vec);
        }

        for(int i=0; i <grid.size(); i++)
        {
            for(int j=0; j <grid[i].size(); j++)
            {
                cout << grid[i][j] << ' ';
            }
            cout << '\n';
        }
*/
        vector<vector<int>> grid;
        vector<int> temp_vec;

        for (int j = 1; j <= size; j++)
        {
            if (size%2==0) temp_vec.push_back(2);
            else temp_vec.push_back(1);
        }
        for (int i = 1; i <= size; i++)
        {
            grid.push_back(temp_vec);
        }

        for(int i=0; i <grid.size(); i++)
        {
            for(int j=0; j <grid[i].size(); j++)
            {
                cout << grid[i][j] << ' ';
            }
            cout << '\n';
        }
    }
    return 0;
}