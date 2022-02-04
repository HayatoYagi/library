struct UnionFind{
    vector<int> par;
    int connectedComponentCnt;
    UnionFind(int32 n){
        par = vector<int>(n, -1);
        connectedComponentCnt = n;
    }

    int root(int x){
        if(par[x] < 0)return x;
        return par[x] = root(par[x]);
    }

    bool unite(int x, int y){
        x = root(x);
        y = root(y);
        if(x == y)return false;
        if(-par[x] < -par[y])swap(x,y);
        par[x] += par[y];
        par[y] = x;
        --connectedComponentCnt;
        return true;
    }

    bool same(int x, int y){
        return root(x) == root(y);
    }

    int size(int x){
        return -par[root(x)];
    }
};
