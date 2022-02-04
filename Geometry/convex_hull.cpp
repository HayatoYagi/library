//vectot2.cpp

bool cmp_x(const P& p, const P& q){
    if(p.x != q.x)return p.x < q.x;
    return p.y < q.y;
}

vector<P> convex_hull(P* ps, int n){
    sort(ps, ps+n, cmp_x);
    int k = 0;
    vector<P> qs(n * 2);
    REP(i,n){
        while(k > 1 && (qs[k-1] - qs[k-2]).det(ps[i] - qs[k-1]) <= 0)k--;
        qs[k++] = ps[i];
    }
    for(int i = n-2, t = k; i >= 0; i--){
        while(k > t && (qs[k-1] - qs[k-2]).det(ps[i] - qs[k-1]) <= 0)k--;
        qs[k++] = ps[i];
    }
    qs.resize(k-1);
    return qs;
}


// ps = convex_hull(&ps[0] , ps.size());