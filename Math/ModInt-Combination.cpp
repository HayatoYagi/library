vector<mint> fact(n+1,1);
REP(i,n)fact[i+1] = fact[i] * (i+1);
vector<mint> ifact(n+1);
ifact[n] = fact[n].inv();
FORR(i,n,1)ifact[i-1] = ifact[i] * i;
auto comb = [&](int32 n, int32 r){
  if(n < r)return mint(0);
  return fact[n] * ifact[n-r] * ifact[r];
};