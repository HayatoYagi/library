// n = |V|
// s = startVertex
// adj : adjacent list, pii(to,cost)
vector<int64> dijkstra(int32 n, int32 s, vector<vector<pii>> &adj){
    vector<int64> d(n, LLINF);
    d[s] = 0;
    priority_queue<pii, vector<pii>, greater<pii>> que;
    que.push(pii(0,s));
    while(!que.empty()){
        pii p = que.top();que.pop();
        int v = p.second;
        if(d[v] < p.first)continue;
        for(int i = 0; i < (signed)adj[v].size(); i++){
            int32 to, cost;
            tie(to, cost) = adj[v][i];
            if(d[to] > d[v] + cost){
                d[to] = d[v] + cost;
                que.push(pii(d[to], to));
            }
        }
    }
    return d;
}