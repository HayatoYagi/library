vector<pair<int64,int32>> prime_factor(int64 n){
    vector<pair<int64,int32>> res;
    for(int64 p = 2; p * p <= n; ++p){
        int32 cnt = 0;
        while(n % p == 0){
            ++cnt;
            n /= p;
        }
        if(cnt > 0)res.emplace_back(p,cnt);
    }
    if(n > 1){
        res.emplace_back(n,1);
    }
    return res;
}