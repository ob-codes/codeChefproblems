#include <iostream>
using namespace std;

int main() 
{
	int t;
	cin >> t;
	
	while (t--)
    {
        int N, color [4][4], count=0;
        cin >> N;        
        color[0][0] = color[0][1] = color[0][2] = color[0][3] = 0;
        color[1][0] = color[2][0] = color[3][0] = 0;
        for (size_t i = 1; i <= 3; i++)
        {
            for (size_t j = 1; j <= 3; j++)
            {
                cin >> color[i][j];
            }
        }
        /*
        0,0  0,1   0,2   0,3
        1,0  1,1   1,2   1,3
        2,0  2,1   2,2   2,3
        3,0  3,1   3,2   3,3
        */
        while(color[1][1] !=N || color[2][2] != N || color[3][3] != N)
        {
            if (color[1][2]>0 && (color[2][1]>0))
            {
                color[1][2]--;color[2][2]++;                
                color[2][1]--;color[1][1]++;
                count++;
            }
            if (color[1][3]>0 && color[3][1]>0)
            {
                color[1][3]--;color[3][3]++;                
                color[3][1]--;color[1][1]++;
                count++;
            }
            if (color[1][2]>0 && color[2][3]>0)
            {
                color[1][2]--;color[2][2]++;
                color[2][3]--;color[1][3]++;                
                color[1][3]--;color[3][3]++;
                color[3][1]--;color[1][1]++;
                count++;count++;
            }
            if (color[2][3]>0 && color[3][2]>0)
            {
                color[3][2]--;color[2][2]++;
                color[2][3]--;color[3][3]++;
                count++;
            }
            if (color[2][1]>0 && color[3][2]>0)
            {
                color[2][1]--;color[3][1]++;
                color[3][2]--;color[2][2]++;
                color[1][3]--;color[3][3]++;
                color[3][1]--;color[1][1]++;
                count++;count++;
            }
            
        }
        cout << count << endl;
    }
    return 0;
}