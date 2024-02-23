#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	
    int R, S;
    cin >> R;
	cin >> S;

   
    int result = R * 8 + S * 3 - 28;
    
    cout << (result >= 0 ? result : 0);

    return 0;
}