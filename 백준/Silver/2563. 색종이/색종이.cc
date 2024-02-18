#include<iostream>
#include<string>

using namespace std;

int main()
{
    int array[100][100] = {0};
    
    int n;
    
    cin >> n;
    int x , y;
    for (int i = 0; i < n; i++)
    {
    	
    	cin >> x >> y;
    	
    	for (int j = x; j <= x + 9; j++)
    	{
    		for (int k = y; k <= y+9; k++)
    		{
    			array[j][k] = 1;
			}
		}
    	
	}
	int count = 0;
	for (int j = 0; j <= 99; j++)
    {
    	for (int k = 0; k <= 99; k++)
    	{
    		if (array[j][k] == 1)
    		{
    			count++;
			}
		}
	}
	
	cout << count;

    return 0;
}
