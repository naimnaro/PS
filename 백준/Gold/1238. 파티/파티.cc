#include <iostream>
#include <queue>
#include <vector>

#define INF 98765432
using namespace std;

vector<pair<int, int>> v[1001];

int dijkstra(int start, int dest) {
    int result = 0;
    int dist[1001];
    fill(dist, dist + 1001, INF);

    priority_queue<pair<int, int>> pq;
    pq.push({0, start});
    dist[start] = 0;

    while (!pq.empty()) 
	{
        int node = pq.top().second;
        int cost = -pq.top().first;
        pq.pop();

        if (node == dest)
		{
            result = dist[node];
            break;
        }

        for (int i = 0; i < v[node].size(); i++) 
		{
            int next = v[node][i].first;
            int nextcost = v[node][i].second + cost;
            if (dist[next] > nextcost) 
			{
                dist[next] = nextcost;
                pq.push({-nextcost, next});
            }
        }
    }

    return result;
}

int main() {
    int n, m, x;
    cin >> n >> m >> x;
    int final = 0;
    int a, b, c;

    for (int i = 0; i < m; i++) 
	{
        cin >> a >> b >> c;
        v[a].push_back({b, c});
    }

    for (int i = 1; i <= n; i++) 
	{
        int first = dijkstra(i, x);
        int second = dijkstra(x, i);
        final = max(final, first + second);
    }

    cout << final << "\n";
    return 0;
}
