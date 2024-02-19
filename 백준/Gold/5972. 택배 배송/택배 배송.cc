#include <iostream>
#include <vector>
#include <queue>


using namespace std;

const int MAX_N = 50001;
const int INF = 987654321;

vector<pair<int, int> > array[MAX_N];
int cost[MAX_N];

void dijkstra(int start) {
    priority_queue<pair<int, int> >pq;
    pq.push({0, start});
    
    while (!pq.empty()) {
        int curCost = -pq.top().first;
        int curNode = pq.top().second;
        pq.pop();

        if (cost[curNode] < curCost) continue;
        
        for (int i = 0; i < array[curNode].size(); i++)
        {
        	int nextNode = array[curNode][i].first;
        	int nextCost = array[curNode][i].second + curCost;
        	
        	if (cost[nextNode]> nextCost)
        	{
        		cost[nextNode] = nextCost;
        		pq.push({-cost[nextNode], nextNode});
			}
		}
		
		

       
    }
}

int main() {
    int N, M;
    cin >> N >> M;

    for (int i = 0; i < M; ++i) {
        int A, B, C;
        cin >> A >> B >> C;
        array[A].push_back({B, C});
        array[B].push_back({A, C});
    }

    
    for (int i = 1; i <= N; ++i) {
        cost[i] = INF;
    }

    
    cost[1] = 0;
    
    dijkstra(1);

    
    cout << cost[N] << endl;

    return 0;
}
