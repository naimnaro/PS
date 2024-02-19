#include <iostream>
#include <vector>

using namespace std;

long long dp(int P, int Q) {
    vector<long long> fibo(P+1, 0);
    
    fibo[1] = 1;
    fibo[2] = 1;

    for (int j = 3; j <= P; j++) 
	{
        fibo[j] = fibo[j - 1] + fibo[j - 2];
        fibo[j] %= Q;
    }

    return fibo[P] % Q;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long T, P, Q;
    cin >> T;

    for (int i = 0; i < T; i++)
	{
        cin >> P >> Q;

        int result = dp(P, Q);
        cout << "Case #" << i + 1 << ": " << result << "\n";
    }

    return 0;
}
