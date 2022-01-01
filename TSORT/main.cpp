#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() 
{
	// your code goes here
    //int* numbers = new int [t];
	int t;
	cin >> t;
	vector<int> numbers;
	
	for (int i=0;i<t;i++)
    {
        int temp = 0;
        cin >> temp;
        numbers.push_back(temp);
    }
    cout << "\nBefore sort: ";
    for (auto i=numbers.begin() ; i!=numbers.end(); i++)    cout << *i << " ";
    sort(numbers.begin(), numbers.end());
    
    /* 
    //bubble sort algorithm
    for (int j=0;j<t;j++)
    {
        for (int k=0;k<t-j-1;k++) 
        {
            if (numbers[k] > numbers[k+1])
            {
                int temp = numbers[k];
                numbers[k] = numbers[k+1];
                numbers[k+1]= temp;
            }
        }
    } 
    */
    cout << "\nAfter sort: ";
    for (auto i=numbers.begin() ; i!=numbers.end(); i++)    cout << *i << " ";
	//delete[] numbers;
	return 0;
}
