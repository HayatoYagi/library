// vector<vector<int32>> d : adjacent matrix

vector<vector<int32>> next(n, vector<int32>(n));
REP(i,n)REP(j,n)next[i][j] = j;
REP(k,n)REP(i,n)REP(j,n){
    if(d[i][j] > d[i][k] + d[k][j]){
        d[i][j] = d[i][k] + d[k][j];
        next[i][j] = next[i][k];
    }
}

//経路復元
for(int cur = start; cur != goal; cur = next[cur][goal]){
    cout << cur << " ";
}
cout << goal << endl;