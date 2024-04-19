#include <iostream>
#include <queue>
#include <vector>

#define INF 98765432
using namespace std;

vector<pair<int, int>> v[801];

int dijkstra(int start, int dest) {
    int result = INF;  // 최소 경로를 찾아야 하므로 무한대로 초기화
    int dist[801];
    fill(dist, dist + 801, INF);

    priority_queue<pair<int, int>> pq;
    pq.push({0, start});
    dist[start] = 0;

    while (!pq.empty()) {
        int node = pq.top().second;
        int cost = -pq.top().first;
        pq.pop();

        if (dist[node] < cost)
		{
            continue;
        }

        if (node == dest) 
		{
            result = min(result, dist[node]);  // 최소 경로 갱신
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
    int n, m;
    cin >> n >> m;

    int a, b, c;

    for (int i = 0; i < m; i++)
	{
        cin >> a >> b >> c;

        v[a].push_back({b, c});
        v[b].push_back({a, c});
    }

    int point1, point2;

    cin >> point1 >> point2;


    int startToPoint1 = dijkstra(1, point1);
    int Point1ToPoint2 = dijkstra(point1, point2);
    int Point2ToEnd = dijkstra(point2, n);

    int startToPoint2 = dijkstra(1, point2);
    int Point2ToPoint1 = dijkstra(point2, point1);
    int Point1ToEnd = dijkstra(point1, n);

    // point1 과 point2를 먼저 가는경우 둘다  
    int case1 = startToPoint1 + Point1ToPoint2 + Point2ToEnd;
    int case2 = startToPoint2 + Point2ToPoint1 + Point1ToEnd;

    if (case1 >= INF && case2 >= INF) 
	{
        cout << -1 << "\n";
    } 
	else 
	{
        cout << min(case1, case2) << "\n";
    }

    return 0;
}
