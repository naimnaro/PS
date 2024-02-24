#include <iostream>
#include <queue>
#include <vector>
#define INF 987654321
using namespace std;

vector<pair<int, int>> map[20001];
vector<int> dist(20001, INF);

void dijkstra(int start) {
    priority_queue<pair<int, int>> pq;
    pq.push(make_pair(0, start));

    dist[start] = 0;
    


    while (!pq.empty()) {
        int cost = -pq.top().first;
        int node = pq.top().second;
        pq.pop();

        if (dist[node] < cost) {
        	
            continue;
        }

        for (int i = 0; i < map[node].size(); i++) {
            int next = map[node][i].first;
            int nextcost = cost + map[node][i].second;

            if (dist[next] > nextcost) {
                dist[next] = nextcost;
                
                

                pq.push(make_pair(-nextcost, next));
                
            }
        }
        
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int V, E;
    
    int start;

    cin >> V >> E;
    
    cin >> start;
    for (int i = 0; i < E; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        map[a].push_back(make_pair(b, c));
    }
    
    for (int i = 1; i <= V; i++) 
	{
        dist[i] = INF;
    }

    dijkstra(start);
    
    for (int i = 1; i <= V; i++) 
	{
        if (dist[i] == INF)
            cout << "INF\n";
        else
            cout << dist[i] << "\n";
    }
   
    

    return 0;
}
