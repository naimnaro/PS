#include <iostream>
#include <algorithm>

using namespace std;


int main(void) {
	
    int ur, tr, uo, to;
    cin >> ur >> tr >> uo >> to;
    
    int result = 56 * ur + 24 * tr + 14 * uo + 6 * to;
    
    cout << result;
    
    return 0;
}