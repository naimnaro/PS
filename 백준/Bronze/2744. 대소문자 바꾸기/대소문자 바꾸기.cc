#include<iostream>
#include<algorithm>>
#include<cctype>

using namespace std;

int main() {
	
    string input;
    cin >> input;

  
    for (char &c : input) 
	{
        if (isupper(c)) 
		{
            c = tolower(c); 
        } 
		else if (islower(c))
		{
            c = toupper(c); 
        }
    }

    cout << input;

    return 0;
}