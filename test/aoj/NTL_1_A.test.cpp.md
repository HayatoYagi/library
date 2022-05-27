---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: Math/prime_factorization.cpp
    title: Math/prime_factorization.cpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=NTL_1_A
    links:
    - https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=NTL_1_A
  bundledCode: "#line 1 \"test/aoj/NTL_1_A.test.cpp\"\n#define PROBLEM \"https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=NTL_1_A\"\
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
    \ false;\n}\n\n#line 1 \"Math/prime_factorization.cpp\"\nvector<pair<int64,int32>>\
    \ prime_factorization(int64 n){\n  assert(n >= 1);\n  vector<pair<int64,int32>>\
    \ res;\n  for(int64 p = 2; p * p <= n; ++p){\n    int32 cnt = 0;\n    while(n\
    \ % p == 0){\n      ++cnt;\n      n /= p;\n    }\n    if(cnt > 0)res.emplace_back(p,cnt);\n\
    \  }\n  if(n > 1){\n    res.emplace_back(n,1);\n  }\n  return res;\n}\n#line 45\
    \ \"test/aoj/NTL_1_A.test.cpp\"\n\nint main(){\n  cin.tie(0);\n  ios::sync_with_stdio(false);\n\
    \  \n  int n;\n  cin >> n;\n  cout << n << \":\";\n  for(auto p : prime_factorization(n)){\n\
    \    REP(i,p.se){\n      cout << \" \" << p.fi;\n    }\n  }\n  cout << endl;\n\
    \  return 0;\n}\n"
  code: "#define PROBLEM \"https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=NTL_1_A\"\
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
    \ false;\n}\n\n#include \"../../Math/prime_factorization.cpp\"\n\nint main(){\n\
    \  cin.tie(0);\n  ios::sync_with_stdio(false);\n  \n  int n;\n  cin >> n;\n  cout\
    \ << n << \":\";\n  for(auto p : prime_factorization(n)){\n    REP(i,p.se){\n\
    \      cout << \" \" << p.fi;\n    }\n  }\n  cout << endl;\n  return 0;\n}\n"
  dependsOn:
  - Math/prime_factorization.cpp
  isVerificationFile: true
  path: test/aoj/NTL_1_A.test.cpp
  requiredBy: []
  timestamp: '2022-05-27 16:58:03+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/aoj/NTL_1_A.test.cpp
layout: document
redirect_from:
- /verify/test/aoj/NTL_1_A.test.cpp
- /verify/test/aoj/NTL_1_A.test.cpp.html
title: test/aoj/NTL_1_A.test.cpp
---
