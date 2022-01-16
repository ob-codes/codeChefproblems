#include <iostream>
#include <math.h>

using namespace std;

int main() 
{
	int t;
	cin >> t;
	
	while (t--)
    {
        int marks[6];
        for (int i = 0; i < 6; i++) cin >> marks[i]; 
        if (marks[0]+marks[1]+marks[2] == marks[3]+marks[4]+marks[5])
        {
            if(marks[0] == marks[3]) 
            {
                if(marks[1] == marks[4]) cout << "Tie" << '\n';
                else if(marks[1] > marks[4]) cout << "Dragon" << '\n';
                else cout << "Sloth" << '\n';
            }
            else if(marks[0] > marks[3])  cout << "Dragon" << '\n';
            else cout << "Sloth" << '\n';
        }
        else if (marks[0]+marks[1]+marks[2] > marks[3]+marks[4]+marks[5]) cout << "Dragon" << '\n';
        else cout << "Sloth" << '\n';
    }
    return 0;
}