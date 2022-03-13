---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: graph/UnionFind.cpp
    title: Union Find Tree (Disjoint Set Union)
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_1_A
    links:
    - https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_1_A
  bundledCode: "#line 1 \"test/aoj/DSL_1_A.test.cpp\"\n#define PROBLEM \"https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_1_A\"\
    \n\n#include <bits/stdc++.h>\n#ifdef __LOCAL\n#define DBG(X) cout << #X << \"\
    \ = \" << (X) << endl;\n#define SAY(X) cout << (X) << endl;\n#else\n#define DBG(X)\n\
    #define SAY(X)\n#define NDEBUG\n#endif\n\nusing namespace std;\n\ntypedef int_fast32_t\
    \ int32;\ntypedef int_fast64_t int64;\n\nconst int32 inf = 1e9+7;\nconst int32\
    \ MOD = 1000000007;\nconst int64 llinf = 1e18;\n\n#define YES(n) cout << ((n)\
    \ ? \"YES\\n\" : \"NO\\n\"  )\n#define Yes(n) cout << ((n) ? \"Yes\\n\" : \"No\\\
    n\"  )\n#define POSSIBLE(n) cout << ((n) ? \"POSSIBLE\\n\" : \"IMPOSSIBLE\\n\"\
    \  )\n#define ANS(n) cout << (n) << \"\\n\"\n#define REP(i,n) for(int64 i=0;i<(n);++i)\n\
    #define FOR(i,a,b) for(int64 i=(a);i<(b);i++)\n#define FORR(i,a,b) for(int64 i=(a);i>=(b);i--)\n\
    #define all(obj) (obj).begin(),(obj).end()\n#define rall(obj) (obj).rbegin(),(obj).rend()\n\
    #define fi first\n#define se second\n#define pb(a) push_back(a)\ntypedef pair<int32,int32>\
    \ pii;\ntypedef pair<int64,int64> pll;\n\ntemplate<class T> inline bool chmax(T&\
    \ a, T b) {\n  if (a < b) { a = b; return true; } return false;\n}\ntemplate<class\
    \ T> inline bool chmin(T& a, T b) {\n  if (a > b) { a = b; return true; } return\
    \ false;\n}\n\n#line 2 \"graph/UnionFind.cpp\"\nusing namespace std;\n\n/**\n\
    \ * @brief Union Find Tree (Disjoint Set Union)\n */\nstruct UnionFind{\n  /**\n\
    \   * @brief n\u9802\u70B90\u8FBA\u306E\u30B0\u30E9\u30D5\u3067\u521D\u671F\u5316\
    \u3059\u308B.\n   * @details O(n)\n   * \n   * @param n \u9802\u70B9\u6570\n \
    \  */\n  UnionFind(int n){\n    par = vector<int>(n, -1);\n    connectedComponentCnt\
    \ = n;\n  }\n\n  /**\n   * @brief \u8FBA(x,y)\u3092\u8FFD\u52A0\u3059\u308B.\n\
    \   * @details O(\\alpha(n)) amortized\n   * \n   * @param x \n   * @param y \n\
    \   * @return true \u9802\u70B9x, y\u306F\u3082\u3068\u3082\u3068\u5225\u306E\u9023\
    \u7D50\u6210\u5206\u306B\u3042\u308A, \u9023\u7D50\u6210\u5206\u306E\u30DE\u30FC\
    \u30B8\u304C\u884C\u308F\u308C\u305F.\n   * @return false \u9802\u70B9x, y\u306F\
    \u3082\u3068\u3082\u3068\u540C\u3058\u9023\u7D50\u6210\u5206\u306B\u3042\u308A\
    , \u9023\u7D50\u6210\u5206\u306E\u30DE\u30FC\u30B8\u306F\u884C\u308F\u308C\u306A\
    \u304B\u3063\u305F.\n   */\n  bool unite(int x, int y){\n    x = root(x);\n  \
    \  y = root(y);\n    if(x == y)return false;\n    if(-par[x] < -par[y])swap(x,y);\n\
    \    par[x] += par[y];\n    par[y] = x;\n    --connectedComponentCnt;\n    return\
    \ true;\n  }\n\n  /**\n   * @brief \u9802\u70B9x, y\u304C\u540C\u3058\u9023\u7D50\
    \u6210\u5206\u306B\u5C5E\u3057\u3066\u3044\u308B\u304B\u3069\u3046\u304B\u8ABF\
    \u3079\u308B.\n   * @details O(\\alpha(n)) amortized\n   * \n   * @param x \n\
    \   * @param y \n   * @return \n   */\n  bool same(int x, int y){\n    return\
    \ root(x) == root(y);\n  }\n\n  /**\n   * @brief \u9802\u70B9x\u3092\u542B\u3080\
    \u9023\u7D50\u6210\u5206\u306E\u9802\u70B9\u6570\u3092\u8FD4\u3059.\n   * @details\
    \ O(\\alpha(n)) amortizedW\n   * \n   * @param x \n   * @return int \n   */\n\
    \  int size(int x){\n    return -par[root(x)];\n  }\n\nprivate:\n  vector<int>\
    \ par;\n  int connectedComponentCnt;\n  int root(int x){\n    if(par[x] < 0)return\
    \ x;\n    return par[x] = root(par[x]);\n  }\n};\n#line 45 \"test/aoj/DSL_1_A.test.cpp\"\
    \n\nint main(){\n  cin.tie(0);\n  ios::sync_with_stdio(false);\n  \n  int n,q;\n\
    \  cin >> n >> q;\n  UnionFind uf(n);\n  while(q--){\n    int com,x,y;\n    cin\
    \ >> com >> x >> y;\n    if(com == 0){\n      uf.unite(x,y);\n    }else{\n   \
    \   ANS(uf.same(x,y));\n    }\n  }\n  return 0;\n}\n"
  code: "#define PROBLEM \"https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_1_A\"\
    \n\n#include <bits/stdc++.h>\n#ifdef __LOCAL\n#define DBG(X) cout << #X << \"\
    \ = \" << (X) << endl;\n#define SAY(X) cout << (X) << endl;\n#else\n#define DBG(X)\n\
    #define SAY(X)\n#define NDEBUG\n#endif\n\nusing namespace std;\n\ntypedef int_fast32_t\
    \ int32;\ntypedef int_fast64_t int64;\n\nconst int32 inf = 1e9+7;\nconst int32\
    \ MOD = 1000000007;\nconst int64 llinf = 1e18;\n\n#define YES(n) cout << ((n)\
    \ ? \"YES\\n\" : \"NO\\n\"  )\n#define Yes(n) cout << ((n) ? \"Yes\\n\" : \"No\\\
    n\"  )\n#define POSSIBLE(n) cout << ((n) ? \"POSSIBLE\\n\" : \"IMPOSSIBLE\\n\"\
    \  )\n#define ANS(n) cout << (n) << \"\\n\"\n#define REP(i,n) for(int64 i=0;i<(n);++i)\n\
    #define FOR(i,a,b) for(int64 i=(a);i<(b);i++)\n#define FORR(i,a,b) for(int64 i=(a);i>=(b);i--)\n\
    #define all(obj) (obj).begin(),(obj).end()\n#define rall(obj) (obj).rbegin(),(obj).rend()\n\
    #define fi first\n#define se second\n#define pb(a) push_back(a)\ntypedef pair<int32,int32>\
    \ pii;\ntypedef pair<int64,int64> pll;\n\ntemplate<class T> inline bool chmax(T&\
    \ a, T b) {\n  if (a < b) { a = b; return true; } return false;\n}\ntemplate<class\
    \ T> inline bool chmin(T& a, T b) {\n  if (a > b) { a = b; return true; } return\
    \ false;\n}\n\n#include \"../../graph/UnionFind.cpp\"\n\nint main(){\n  cin.tie(0);\n\
    \  ios::sync_with_stdio(false);\n  \n  int n,q;\n  cin >> n >> q;\n  UnionFind\
    \ uf(n);\n  while(q--){\n    int com,x,y;\n    cin >> com >> x >> y;\n    if(com\
    \ == 0){\n      uf.unite(x,y);\n    }else{\n      ANS(uf.same(x,y));\n    }\n\
    \  }\n  return 0;\n}\n"
  dependsOn:
  - graph/UnionFind.cpp
  isVerificationFile: true
  path: test/aoj/DSL_1_A.test.cpp
  requiredBy: []
  timestamp: '2022-03-13 15:34:49+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/aoj/DSL_1_A.test.cpp
layout: document
redirect_from:
- /verify/test/aoj/DSL_1_A.test.cpp
- /verify/test/aoj/DSL_1_A.test.cpp.html
title: test/aoj/DSL_1_A.test.cpp
---
