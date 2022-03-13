#define PROBLEM "https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_1_A"

#include <bits/stdc++.h>
#ifdef __LOCAL
#define DBG(X) cout << #X << " = " << (X) << endl;
#define SAY(X) cout << (X) << endl;
#else
#define DBG(X)
#define SAY(X)
#define NDEBUG
#endif

using namespace std;

typedef int_fast32_t int32;
typedef int_fast64_t int64;

const int32 inf = 1e9+7;
const int32 MOD = 1000000007;
const int64 llinf = 1e18;

#define YES(n) cout << ((n) ? "YES\n" : "NO\n"  )
#define Yes(n) cout << ((n) ? "Yes\n" : "No\n"  )
#define POSSIBLE(n) cout << ((n) ? "POSSIBLE\n" : "IMPOSSIBLE\n"  )
#define ANS(n) cout << (n) << "\n"
#define REP(i,n) for(int64 i=0;i<(n);++i)
#define FOR(i,a,b) for(int64 i=(a);i<(b);i++)
#define FORR(i,a,b) for(int64 i=(a);i>=(b);i--)
#define all(obj) (obj).begin(),(obj).end()
#define rall(obj) (obj).rbegin(),(obj).rend()
#define fi first
#define se second
#define pb(a) push_back(a)
typedef pair<int32,int32> pii;
typedef pair<int64,int64> pll;

template<class T> inline bool chmax(T& a, T b) {
  if (a < b) { a = b; return true; } return false;
}
template<class T> inline bool chmin(T& a, T b) {
  if (a > b) { a = b; return true; } return false;
}

#include "../../graph/UnionFind.cpp"

int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);
  
  int n,q;
  cin >> n >> q;
  UnionFind uf(n);
  while(q--){
    int com,x,y;
    cin >> com >> x >> y;
    if(com == 0){
      uf.unite(x,y);
    }else{
      ANS(uf.same(x,y));
    }
  }
  return 0;
}